#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"podaj swoje imie i nazwisko: ";
    string imie_nazwisko;
    getline(cin,imie_nazwisko);
    cout<<" podaj swoja stawke godzinowa: ";
    int stawka;
    cin>>stawka;
    cout<<" podaj liczbe przepracowanych godzin ";
    float godziny;
    cin>>godziny;
    cout<<"pierwszy format: "<<endl;
    cout<<right;
    cout<<setw(20)<<imie_nazwisko<<": "<<setw(10)<<stawka<<"zl : "<<godziny<<endl;
    cout<<"drugi format: "<<endl;
    cout<<left;
    cout<<setw(20)<<imie_nazwisko<<": "<<setw(10)<<stawka<<"zl : "<<godziny<<endl;



    return 0;
}
