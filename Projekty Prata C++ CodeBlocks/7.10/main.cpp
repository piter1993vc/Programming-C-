#include <iostream>

using namespace std;
char * filler(char ch,int ile);
int main()
{
    cout <<"podaj znak "<<endl;
    char ch;
    cin>>ch;
    cout<<"podaj liczbe calkowita "<<endl;
    int liczba;
    cin>>liczba;
    char *pstr=filler(ch,liczba);
    cout<<pstr<<endl;
    delete []pstr;
    pstr=filler('+',12);
    cout<<pstr<<" NARKA "<<pstr<<endl;
    delete []pstr;

    return 0;
}
char * filler(char ch,int ile)
{
    char *wsk=new char[ile+1];
    wsk[ile]='\0';
    while(ile-->0)
    {
        wsk[ile]=ch;
    }

    return wsk;

}
