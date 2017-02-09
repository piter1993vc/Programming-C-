#include <iostream>
#include <string>

using namespace std;
class Worker
{

private:
    string fullname;
    long id;
public:
    Worker():fullname("brak"),id(0L){}
    Worker(const string &s,int n):fullname(s),id(n){}
    virtual ~Worker()=0;
    virtual void Set();
    virtual void Show()const;



};
class Waiter: public Worker
{
private:
    int panache;
public:

    Waiter():Worker(),panache(0){}
    Waiter(const string &s,long n,int p=0):Worker(s,n),panache(p){}
    Waiter(const Worker &wk,int p=0):Worker(wk),panache(p){}
    void Set();
    void Show()const;




};

class Singer: public Worker
{
protected:
    enum{inny,alt,kontralt,sopran,bas,baryton,tenor};
    enum{vtype=7};
private:
    static const char* pv[vtype];
    int voice;

public:

    Singer():Worker(),voice(inny){}
    Singer(const std::string &s,long n,int v=inny):Worker(s,n),voice(v){}
    Singer(const Worker &wk,int v=inny):Worker(wk),voice(v){}


    void Set();
    void Show()const;




};

const int lim=4;
int main()
{
    Waiter bob("Robert Gruszka",314L,5);
    Singer bev("beverly Hills",424L,2);
    Waiter w_temp;
    Singer s_temp;

    Worker *wsk[lim]={&bob,&bev,&w_temp,&s_temp};
    int i;
    for(i=2;i<lim;i++)
    {
        wsk[i]->Set();
    }
   for(i=0;i<lim;i++)
    {
        wsk[i]->Show();
    }

















    cout << "Hello world!" << endl;
    return 0;
}
 Worker::~Worker(){}
 void Worker::Set()
 {
     cout<<"podaj imie i nazwisko pracownika:";
     getline(cin,fullname);
     cout<<"podaj ID pracownika";
     cin>>id;
     cin.clear();
     while(cin.get()!='\n')
        continue;

 }
 void Worker::Show()const
 {
     cout<<"imie i nazwisko "<<fullname<<endl;
     cout<<"numer ID "<<id<<endl;




 }

 void Waiter::Set()
 {
     cout<<"podaj poziom elegancji kelnera ";
     cin>>panache;
        cin.clear();
     while(cin.get()!='\n')
        continue;
 }
 void Waiter::Show()const
 {
     cout<<"kategoria kelner"<<endl;
Worker::Show();
cout<<"elegancja "<<panache<<endl;




 }

const char *Singer::pv[]={"inny","alt","kontralt","sopran","bas","baryton","tenor"};
void Singer::Set()
{
    Worker::Set();
    cout<<"podaj numer skali glosu piosenkarza "<<endl;
    int i;
    for(i=0;i<vtype;i++)
    {
        cout<<i<<":"<<pv[i]<<" ";
        if(i%4==0&&i!=0)
            cout<<endl;
    }
    if(i%4!=0)
        cout<<endl;
    while(cin>>voice&&(voice<0||voice>=vtype))
           cin.clear();
        cout<<"podaj wartosc nieujenma i mniejsza od "<<vtype<<endl;
       cin.clear();
    while(cin.get()!='\n')
        continue;

}
 void Singer::Show()const
 {
     cout<<"kategoria piosenkarz"<<endl;
Worker::Show();
cout<<"skala glosu "<<pv[voice]<<endl;

 }
