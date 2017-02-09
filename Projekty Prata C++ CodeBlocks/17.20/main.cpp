#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>


using namespace std;
 const int lim=20;
 struct planet
 {

     char name[lim];
     double population;
     double g;
 };

 const char *file="planety.dat";
 inline void eatline(){while(std::cin.get()!='\n')   continue;  }
int main()
{
    planet pl;
    cout<<fixed;
    fstream finout;
    finout.open(file,ios_base::in|ios_base::out|ios_base::binary);
    int ct=0;
    if(finout.is_open())
    {
        finout.seekg(0);
        cout<<"oto aktualna zawartosc pliku "<<file<<":\n";
        while(finout.read((char*)&pl,sizeof pl))
            cout<<ct++<<": "<<setw(lim)<<pl.name<<": "
            <<setprecision(0)<<setw(12)<<pl.population
            <<setprecision(2)<<setw(6)<<pl.g<<endl;
        if(finout.eof())
        {
            finout.clear();
        }
        else
        {
            cerr<<"blad przy probie odczytu pliku "<<file<<".\n";
            exit(EXIT_FAILURE);
        }

    }
    else
    {

        cerr<<"nie mozna otworzyc pliku "<<file<<" --koniec pracy programu.\n";
        exit(EXIT_FAILURE);
    }
    cout<<"podaj numer rekordu , ktory chcesz zmienic : ";
    long rec;
    cin>>rec;
    eatline();
    if(rec<0||rec>=ct)
    {
        cerr<<"niepoprawny numer rekordu --koniec pracy programu\n";
        exit(EXIT_FAILURE);
    }
    streampos place=rec*sizeof pl;
    finout.seekg(place);
    if(finout.fail())
    {
        cerr<<"blad podczas wyszukiwania pozycji\n";
        exit(EXIT_FAILURE);
    }
    finout.read((char*)&pl,sizeof pl);
    cout<<"twoj wybor:\n";
    cout<<rec<<": "<<setw(lim)<<pl.name<<": "<<setprecision(0)<<setw(12)<<pl.population
    <<setprecision(2)<<setw(6)<<pl.g<<endl;
    if(finout.eof())
    {
        finout.clear();
    }
    cout<<"podaj nazwe planety: ";
    cin.get(pl.name,lim);
    cout<<"podaj zaludnienie planety: ";
    cin>>pl.population;
    cout<<"podaj przyspieszenie grawitacyjne planety: ";
    cin>>pl.g;
    finout.seekg(place);
    finout.write((char *)&pl,sizeof pl)<<flush;
    if(finout.fail())
    {
        cerr<<"blad przy probie zapisu \n";
        exit(EXIT_FAILURE);

    }
    ct =0;
    finout.seekg(0);
    cout<<"oto nowa zawartosc pliku "<<file<<": \n";
    while(finout.read((char*)&pl,sizeof pl))
    {
        cout<<ct++<<": "<<setw(lim)<<pl.name<<": "
            <<setprecision(0)<<setw(12)<<pl.population
            <<setprecision(2)<<setw(6)<<pl.g<<endl;
    }
    finout.close();
    return 0;
}
