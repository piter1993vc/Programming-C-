#include <iostream>
#include <string>

using namespace std;

struct inflatable{
std::string name;
float volume;
float price;



};
int main()
{
    inflatable *ps=new inflatable;
    cout<<"podaj nazwe dmuchanej zabawki: ";
    getline(cin,ps->name);
    cout<<"podaj objetosc w stopach szesciennych:";
    cin>>(*ps).volume;
    cout<<"podaj cene w zlotowach";
    cin>>ps->price;
    cout<<"nazwa: "<<ps->name<<endl;
     cout<<"obietosc: "<<ps->volume<<" stop szesciennych"<<endl;
      cout<<"cena: "<<ps->price<<" zlotych"<<endl;

delete ps;
    return 0;
}
