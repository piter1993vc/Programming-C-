#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

int main()
{
    ifstream fin;
    fin.open("zakupy.txt");
    if(fin.is_open()==false)
    {
        cerr<<"nie mozna otworzyc pliku.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int licznik=0;
    getline(fin,item, ':' );
    while(fin)
    {
        ++licznik;
        cout<<licznik<<" "<<item<<endl;
        getline(fin,item, ':' );
    }
    cout<<"koniec \n";
fin.close();
    return 0;
}
