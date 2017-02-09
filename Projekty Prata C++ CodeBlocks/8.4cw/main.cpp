#include <iostream>
#include <cstring>
using namespace std;
struct stringy{


    char *str;
    int ct;

};
void seter(stringy &s,char *lan);
void show(const stringy &s,int ile=1);
void show(const char *str,int ile=1);
int main()
{
    stringy beany;
    char testing[]="rzeczywistosc to juz nie to, co kiedys";
    show(testing);
    show(testing,3);
    seter(beany,testing);
    show(beany,3);

    cout << "Hello world!" << endl;
    return 0;
}
void seter(stringy &s,char *lan)
{
    int licznik=strlen(lan);
    char *wsk=new char[licznik+1];
  wsk=lan;
  s.str=wsk;
  s.ct=licznik;

}

void show(const stringy &s,int ile)
{
    for(int i=0;i<ile;i++)
    {
      cout<<"napis: "<<s.str<<endl;
      cout<<"licznik: "<<s.ct<<endl;
    }


}

void show(const char *str,int ile)
{
    const char *wsk=str;
    for(int i=0;i<ile;i++)
    {
        while(*str)
        {
            cout<<*str;
            str++;

        }
        cout<<endl;
        str=wsk;

    }

}

