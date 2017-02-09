#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T max5( T a[],int ile);
template <> char * max5(char *tab[], int ile);
int main()
{
    char *tab3[3]={"maj","kaja","kupaa"};
    int tab1[5]{1,2,3,4,5};
    double tab2[5]{1.0,2.0,3.0,4.0,5.6};
    cout << max5(tab1,5) << endl;
    cout << max5(tab2,5) << endl;
    cout << max5(tab3,3) << endl;
    return 0;
}
template <typename T>
T max5( T a[],int ile)
{
    T x=a[0];
for(int i=0;i<ile;i++)
{
    x=(a[i]>x)?a[i]:x;
}
    return x;
}
template <> char * max5( char *tab[], int ile)
{
    int sizer=strlen(tab[0]);
     char *wsk=tab[0];
for(int i=0;i<ile;i++)
{
    cout<<strlen(tab[i])<<endl;
wsk=(strlen(tab[i])>=unsigned(sizer))?tab[i]:wsk;
}
return wsk;
}
