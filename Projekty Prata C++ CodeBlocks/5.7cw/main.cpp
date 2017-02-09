#include <iostream>

using namespace std;
struct auta{
string marka;
int rok_budowy;

};
int main()
{
    int ile;
    cout<<"Ile samopchodow chcesz skatalogowac? ";
    cin>>ile;
    auta *wsk=new auta[ile];
    for(int i=0;i<ile;i++)
    {
        cout<<"samochod #"<<i+1<<":"<<endl;
        cout<<"prosze podac marke: ";
        cin>>(wsk+i)->marka;
        cout<<"rok produkcji: ";
        cin>>(wsk+i)->rok_budowy;
    }

     for(int i=0;i<ile;i++)
    {
       cout<<(wsk+i)->rok_budowy<<" "<<(wsk+i)->marka<<endl;

    }




    cout << "Hello world!" << endl;
    return 0;
}
