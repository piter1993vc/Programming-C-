#include <iostream>
#include <string>

using namespace std;

int main()
{


 string name;
string dessert;
    cout << "podaj swoje imie" << endl;
    getline(cin,name);
    cout<<"podaj swoj ulubiony deser"<<endl;
  getline(cin,dessert);
    cout<<"mam dla ciebie "<<dessert;
    cout<<", "<<name<<".\n"<<endl;
    return 0;
}
