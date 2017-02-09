#include <iostream>
#include <cstring>

using namespace std;
char * left(const char *str,int ile=1);
unsigned long left(unsigned long num,unsigned ile);
int main()
{
    const char *napis="labedziatko";
    unsigned long n=12345678;
    char *ps;
     int i;
    for(i=1;i<10;i++)
    {
        ps=left(napis,i);
        cout<<left(n,i)<<endl;
        cout<<ps<<endl;
        delete[]ps;
    }

    return 0;
}
char * left(const char *str,int ile)
{
    int m=0;
    int sizer=strlen(str);
    if(ile<0)
    {
        m=1;
    }
    else
        m=ile;

    m=(m<sizer)?m:sizer;
    char *napis=new char[m+1];
    int i=0;
    while(i<m&&str[i])
    {
        napis[i]=str[i];
        i++;
    }
    napis[i]='\0';

    return napis;
}

unsigned long left(unsigned long num,unsigned ile)
{
 unsigned digits = 1;
    unsigned long n = num;

    if (ile == 0 || num == 0)
        return 0;       // jeśli brak cyfr, zwraca 0
    while (n /= 10)
        digits++;
    if (digits > ile)
    {
        ile = digits - ile;
        while (ile--)
            num /= 10;
        return num;         // zwraca ct skrajnych lewych cyfr
    }
    else                // jeśli ct >= liczby cyfr
        return num;     // zwraca całą liczbę


}
