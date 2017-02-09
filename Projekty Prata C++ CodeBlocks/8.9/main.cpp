#include <iostream>
#include <cstring>

using namespace std;
char * left(const char *str,int ile=1);
int main()
{
    char napis[30];
    cout << "podaj napis"<< endl;
    cin.get(napis,30);
    char *ps=left(napis,5);
    cout<<ps<<endl;
    delete []ps;
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
