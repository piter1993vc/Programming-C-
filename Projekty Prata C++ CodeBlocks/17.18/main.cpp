#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>



using namespace std;
const char *file="goscie.txt";
int main()
{
    char ch;
    ifstream fin;
    fin.open(file);
    if(fin.is_open())
    {

        cout<<"oto aktualna zawartosc pliku"
        <<file<<endl;
        while(fin.get(ch))
            cout<<ch;
            fin.close();
    }
    ofstream fout(file,ios_base::out|ios_base::app);
    if(!fout.is_open())
    {
        cerr<<"nie mozna otworzyc pliku "<<file<<" do zapisu.\n";
        exit(EXIT_FAILURE);
    }
    cout<<"podaj imiona i nazwiska gosci( aby zakonczyc wprowadz pusty wiersz)\n";
    string name;
    while(getline(cin,name)&&name.size()>0)
    {
        fout<<name<<endl;

    }
    fin.clear();
    fin.open(file);
    if(fin.is_open())
    {
        cout<<"oto nowa zawartosc pliku "
        <<file<<": \n";
        while(fin.get(ch))
            cout<<ch;
        fin.close();

    }
    cout<<" koniec.\n";


    return 0;
}
