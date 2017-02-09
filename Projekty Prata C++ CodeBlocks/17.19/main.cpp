#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>



using namespace std;
inline void eatline(){while(cin.get()!='\n') continue;}
struct planet
{
    char name[20];
    double population;
    double g;

};
const char *file="planety.dat";
int main()
{
    planet pl;
    cout<<fixed<<right;

ifstream fin;
fin.open(file,ios_base::in|ios_base::binary);
if(fin.is_open())
{

    cout<<"oto aktualna zawartosc pliku "<<file<<endl;
    while(fin.read(reinterpret_cast<char*>(&pl),sizeof pl))
    {


        cout<<setw(20) <<pl.name<<" : ";
        cout<<setprecision(0)<<setw(12)<<pl.population<<setprecision(2)<<setw(6)  <<pl.g<<endl;
    }
    fin.close();
}
ofstream fout(file,ios_base::out|ios_base::app|ios_base::binary);
if(!fout.is_open())
{
    cerr<<"nie mozna otworzyc pliku "<<file<<" do zapisu.\n";

    exit(EXIT_FAILURE);
}
cout<<"podaj nazwe planety ( aby zakonczyc wprtowadz pusty wiersz ):\n";
cin.get(pl.name,20);
while(pl.name[0]!='\0')
{

    cout<<"podaj zaludnienie planety: ";
    cin>>pl.population;
    cout<<"podaj przyspieszenie grawitacyjne na planecie ";
    cin>>pl.g;
    eatline();
    fout.write((char*)&pl,sizeof pl);
    cout<<"podaj nazwe planety ( aby zakonczyc wprowadz pusty wiersz)\n";
        cin.get(pl.name,20);

}
fout.close();
fin.clear();
fin.open(file,ios_base::in|ios_base::binary);
if(fin.is_open())
{

    cout<<"oto nowa zawartosc pliku "<<file<<" :\n";
    while(fin.read((char*)&pl,sizeof pl))
    {
          cout<<setw(20) <<pl.name<<" : ";
        cout<<setprecision(0)<<setw(12)<<pl.population<<setprecision(2)<<setw(6)  <<pl.g<<endl;
    }
    fin.close();
}
cout<<"koniec.\n";

    return 0;
}
