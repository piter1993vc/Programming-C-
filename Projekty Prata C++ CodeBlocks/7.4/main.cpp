#include <iostream>

using namespace std;
long double loteria(unsigned maximus, unsigned ile);
int main()
{


    double total,choices;
    cout<<"podaj najwieksza liczbe oraz lioczbe skreslen: ";
    while(cin>>total>>choices&&total>=choices)
    {

        cout<<"szansa wygranej to jeden do: ";
        cout<<loteria(total,choices);
        cout<<"\npodaj 2 kolejne liczby 1-max 2-rzuty: ";
    }
    cout << "\ndo widzenia" << endl;
    return 0;
}









long double loteria(unsigned maximus, unsigned ile)
{
    long double total=1.0;
    unsigned n;
    long double i;
    for(i=maximus,n=ile;n>0;i--,n--)
    {

        total=total*i/n;
    }

    return total;

}
