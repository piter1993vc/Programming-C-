#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Podaj swoje imie"<<endl;
    string imie;
    cin>>imie;
    int licz=imie.size();
    cout<<"twoje imie od konca brzmi:"<<endl;
    for(int i=licz;i>=0;i--)
    {
        cout<<imie[i];

    }

    return 0;
}
