#include <iostream>

using namespace std;

int main()
{
    cout<<"w ktorym roku zbudowano twoj dom? ";
    int year;
    (cin>>year).get();
    cout<<"przy jakiej ulicy mieszkasz? \n";
    char ulica[80];
    cin.getline(ulica,80);
    cout<<"rok budowy "<<year<<endl;
    cout<<"adres "<<ulica<<endl;
    cout<<"gotowe "<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
