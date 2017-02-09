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




int main(int argc,char *argv[])
{
    if(argc<4)
    {
        cerr<<"Blad !";
        exit(EXIT_FAILURE);
    }
    ifstream plik1;
    ifstream plik2;
    ofstream plik3;
    list<gosc> lista_bolka;
    list<gosc> lista_lolka;
    list<gosc> lista_wspolna;
    gosc temp;

    plik1.open(argv[1],ios_base::in|ios_base::binary);
    plik2.open(argv[2],ios_base::in|ios_base::binary);
    plik3.open(argv[3],ios_base::out|ios_base::binary);
    if(!plik1.is_open())
    {
        cerr<<"nie otwarto pliku "<<argv[1]<<" koniec programu !";
        exit(EXIT_FAILURE);

    }
        if(!plik2.is_open())
    {
        cerr<<"nie otwarto pliku "<<argv[2]<<" koniec programu !";
        exit(EXIT_FAILURE);

    }
        if(!plik3.is_open())
    {
        cerr<<"nie utworzono pliku "<<argv[3]<<" koniec programu !";
        exit(EXIT_FAILURE);
    }
plik1.read((char*)&temp,sizeof temp);
    cout<<temp.imie<<" "<<temp.nazwisko<<endl;









   plik1.close();
   plik2.close();
   plik3.close();
   cout<<"koniec";






    return 0;
}
