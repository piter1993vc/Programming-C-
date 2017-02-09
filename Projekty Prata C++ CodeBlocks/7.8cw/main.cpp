#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int season=4;
const char sezony[season][30]{"wiosna","lato","jesien","zima"};
struct wydatki{
    double hajsy[season];
};
void fillera(double tab[],int ile);
void fillerb(wydatki *str);
void showa(double tab[],int ile);
void showb(wydatki str);
int main()
{
 wydatki str;
    char ch;
  double tab[season];
    cout<<"ktora wersje programu wybierasz\n";
    cout<<"a)tablica double  b)struktura z tablica double?: ";
    cin>>ch;
    while(!strchr("ab",ch))
    {
        cin.clear();
        cout<<"popraw sie:";
        cin>>ch;
    }
if(ch=='a')
{
    cout<<"wersja "<<ch<<endl;
 fillera(tab,season);
 showa(tab,season);
}
if(ch=='b')
{
       cout<<"wersja "<<ch<<endl;
 fillerb(&str);
 showb(str);
}
    return 0;
}
void fillera(double tab[],int ile)
{
    for(int i=0;i<ile;i++)
{
    cout<<"podaj hajsy nr "<<i+1<<" ";
    cin>>tab[i];
}
}
void fillerb(wydatki *str)
{
    for(int i=0;i<season;i++)
{
    cout<<"podaj hajsy nr "<<i+1<<" ";
    cin>>str->hajsy[i];
}
}
void showa(double tab[],int ile)
{
double total=0.0;
    cout<<"\nWYDATKI\n";
    for(int i=0;i<season;i++)
    {
        cout<<sezony[i]<<" "<<tab[i]<<" zl "<<endl;
        total+=tab[i];
    }
    cout<<"lacznie wydatki to : "<<total<<" zl "<<endl;
}
void showb(wydatki str)
{

double total=0.0;
    cout<<"\nWYDATKI\n";
    for(int i=0;i<season;i++)
    {
        cout<<sezony[i]<<" "<<(str.hajsy[i])<<" zl "<<endl;
        total+=str.hajsy[i];
    }
    cout<<"lacznie wydatki to : "<<total<<" zl "<<endl;
}

