#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <list>
#include <string>
using namespace std;
struct gosc
{

    string imie;
    string nazwisko;
};



int main()
{
    ofstream plik;
       gosc temp;
       string pliczek;
       cout<<"podaj nazwe pliku do utworzenia .\n";
       getline(cin,pliczek);
       pliczek+=".dat";
       plik.open(pliczek.c_str(),ios_base::out|ios_base::binary);
       if(!plik.is_open())
       {
                cerr<<"nie otwarto pliku "<<pliczek<<" koniec programu !";
        exit(EXIT_FAILURE);

       }

while(1)
{


      cout<<"podaj imie:";
       getline(cin,temp.imie);
           cout<<"podak nazwisko:";
       getline(cin,temp.nazwisko);

   plik.write((char*)&temp,sizeof temp);
   cout<<"kontynuowac czy zakonczyc(t kontynuowac k zakonczyc)";
   char ch;
   cin>>ch;
   while(cin.get()!='\n')
    continue;
   if(ch=='k')
    break;
}


       plik.close();
    return 0;
}
