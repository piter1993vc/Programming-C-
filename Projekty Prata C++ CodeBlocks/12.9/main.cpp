#include <iostream>
#include <cstring>
#include <string>
#include <new>
const int buff=512;



using namespace std;
class Just{

private:
    string words;
    int number;
public:
    Just(const string &s="obiekt testowy",int n=0)
{
  words=s;number=n;cout<<words<<" skonstruowany\n";
}
~Just()
{

    cout<<words<<" usuniety\n";
}
void Show()const { cout<<words<<" , "<<number<<endl;}


};


int main()
{
    char *buffer=new char[buff];
    Just *pc1,*pc2;
    pc1=new (buffer) Just;
    pc2= new Just("sterta1",20);

    cout<<"adresy blokow pamieci:\n"<<"bufor:"<<(void*)buffer<<" sterta: "<<pc2<<endl;
    cout<<pc1<<" : ";
    pc1->Show();
    cout<<pc2<<" : ";
    pc2->Show();
    Just *pc3,*pc4;
    pc3=new (buffer+sizeof(Just)) Just("lepszy pomysl",6);
    pc4=new Just("sterta2",10);
    cout<<"zawartosc pamieci\n";
    cout<<pc3<<": ";
    pc3->Show();
    cout<<pc4<<": ";
    pc4->Show();
    delete pc2;
    delete pc3;
    delete []buffer;
    cout<<"fajrant"<<endl;
    pc1->~Just();
    pc4->~Just();





    return 0;
}



