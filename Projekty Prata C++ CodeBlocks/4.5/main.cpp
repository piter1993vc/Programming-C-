#include <iostream>

using namespace std;

int main()
{
    const int array_size=20;

    char name[array_size];
    char dessert[array_size];
    cout << "podaj swoje imie" << endl;
    cin.get(name,array_size).get();
    cout<<"podaj swoj ulubiony deser"<<endl;
    cin.get(dessert,array_size).get();
    cout<<"mam dla ciebie "<<dessert;
    cout<<", "<<name<<".\n"<<endl;
    return 0;
}
