#include <iostream>

using namespace std;

int main()
{


    cout << "podaj liczebnosc ziemi " << endl;
    long long ludzkosc;
    cin>>ludzkosc;
     cout << "podaj liczebnosc Polski " << endl;
    long long polska;
    cin>>polska;


    cout<<"Polulacja Polski stanowi "<<static_cast<long double>(polska)/static_cast<long double>(ludzkosc)<<"\% polulacji swiata"<<endl;




        return 0;
}
