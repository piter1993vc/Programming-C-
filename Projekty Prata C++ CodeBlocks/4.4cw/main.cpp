#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string  imie;
    string nazwisko;
    cout<<"podaj imie";
    cin>>imie;
    cout<<"podaj nazwisko:";
    cin>>nazwisko;
    nazwisko+=", ";
    nazwisko+=imie;


    cout << nazwisko << endl;
    return 0;
}
