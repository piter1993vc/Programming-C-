#include <iostream>

using namespace std;

int main()
{
    cout<<"jak masz na imie: ";
    char imie[20];
    cin.getline(imie,20);
    cout<<"jak sie nazywasz:";
    char nazwisko[20];
    cin.getline(nazwisko,20);
    cout<<"na jaka ocene zaslugujesz";
    int ocena;
    cin>>ocena;
    while(ocena<2)
    {
        cout<<"podales za niska ocene, popraw sie";
        cin>>ocena;

    }
    cout<<"ile masz lat";
    int lata;
    cin>>lata;
    cout<<"nazwisko: "<<nazwisko<<", "<<imie<<endl;
    cout<<"ocena: "<<ocena-1<<endl;
    cout<<"wiek: "<<lata<<endl;
    return 0;
}
