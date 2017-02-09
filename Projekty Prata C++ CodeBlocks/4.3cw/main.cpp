#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char  imie[80];
    char nazwisko[80];
    cout<<"podaj imie";
    cin>>imie;
    cout<<"podaj nazwisko:";
    cin>>nazwisko;
    strcat(nazwisko,", ");
    strcat(nazwisko,imie);


    cout << nazwisko << endl;
    return 0;
}
