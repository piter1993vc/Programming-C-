#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("konik");

    cout << "podaj marke i model auta: " << endl;
    cin.getline(automobile,50);
    cout<<"podaj rok produkcji: ";
    cin>>year;
    cout<<"podaj cene wejsciowa: ";
    cin>>a_price;
    d_price=0.913*a_price;


    cout<<fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout<<"marka i model: "<<automobile<<endl;
    cout<<"rok: "<<year<< endl;
    cout<<"cena wywolawcza: "<<a_price<<endl;
    cout<<"cena biezaca: "<<d_price<<endl;


    outFile<<fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile<<"marka i model: "<<automobile<<endl;
    outFile<<"rok: "<<year<< endl;
    outFile<<"cena wywolawcza: "<<a_price<<endl;
    outFile<<"cena biezaca: "<<d_price<<endl;

    outFile.close();


    return 0;
}
