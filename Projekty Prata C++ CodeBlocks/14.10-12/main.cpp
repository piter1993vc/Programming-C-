#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Worker
{

private:
    string fullname;
    long id;
    protected:
        virtual void Data()const;
        virtual void Get();

public:
    Worker():fullname("brak"),id(0L){}
    Worker(const string &s,long n):fullname(s),id(n){}
    virtual ~Worker()=0;
    virtual void Set()=0;
    virtual void Show()const=0;



};
class Waiter: virtual public Worker
{
private:
    int panache;
protected:
    void Data()const ;
    void Get();
public:

    Waiter():Worker(),panache(0){}
    Waiter(const string &s,long n,int p=0):Worker(s,n),panache(p){}
    Waiter(const Worker &wk,int p=0):Worker(wk),panache(p){}
    void Set();
    void Show()const;




};

class Singer: virtual public Worker
{
protected:
    enum{inny,alt,kontralt,sopran,bas,baryton,tenor};
    enum{vtype=7};
    void Data()const;
    void Get();
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
class SingerWaiter:public Waiter, public Singer
{
protected:
    void Data()const;
    void Get();
public:
    SingerWaiter(){}
    SingerWaiter(const std::string &s,long n,int p=0,int v=inny):Worker(s,n),Waiter(s,n,p),Singer(s,n,v){}
    SingerWaiter(const Worker &wk,int p=0,int v=inny):Worker(wk),Waiter(wk,p),Singer(wk,v){}
    SingerWaiter(const Waiter &wt,int v=inny):Worker(wt),Waiter(wt),Singer(wt,v){}
    SingerWaiter(const Singer &wt,int p=0):Worker(wt),Waiter(wt,p),Singer(wt){}

    void Set();
    void Show()const;






};
const int lim=5;
int main()
{
Worker *lolas[lim];
int ct;
for(ct=0;ct<lim;ct++)
{





    char choice;
    cout<<"podaj kategorie pracownika:\n"
    <<"k- kelner, p-piosenkarz, s-spiewajacy kelner, w-wyjscie\n";
    cin>>choice;
    while(strchr("kpsw",choice)==NULL)
    {

        cout<<"wpisz k,p,s,lub w"<<endl;
        cin>>choice;
    }

    if(choice=='w')
        break;


    switch(choice)
    {


        case 'k': lolas[ct]=new Waiter; break;
        case 'p': lolas[ct]=new Singer; break;
        case 's': lolas[ct]=new SingerWaiter; break;

    }
    cin.get();
    lolas[ct]->Set();
}

cout<<"\n lista pracownikow:\n";
int i;
for(i=0;i<ct;i++)
{

    cout<<endl;
    lolas[i]->Show();
}
for(i=0;i<ct;i++)
{


    delete lolas[i];
}
cout<<"koniec"<<endl;
















    cout << "Hello world!" << endl;
    return 0;
}
 Worker::~Worker(){}

 void Worker::Data()const
 {

 cout<<"imie i nazwisko "<<fullname<<endl;
 cout<<"numer identyfikacyjny "<<id<<endl;




 }
 void Worker::Get()
 {

     getline(cin,fullname);
     cout<<"podaj numer identyfikacyjny: ";
     cin>>id;
    cin.clear();
     while(cin.get()!='\n')
    continue;

 }



 void Waiter::Set()
 {
     cout<<"podaj imie i nazwisko kelnera ";
    Worker::Get();
    Get();
 }
  void Waiter::Data()const
 {
 cout<<"elegancja "<<panache<<endl;


 }
 void Waiter::Show()const
 {
     cout<<"kategoria kelner"<<endl;
    Worker::Data();
    Data();




 }




 void Waiter::Get()
 {
     cout<<" podaj poziom elegancji kelnera: ";
     cin>>panache;
      cin.clear();
     while(cin.get()!='\n')
    continue;





 }



const char *Singer::pv[]={"inny","alt","kontralt","sopran","bas","baryton","tenor"};

void Singer::Set()
{
    cout<<"podaj imie i nazwisko piosenkarza: ";
    Worker::Get();
    Get();
}

void Singer::Get()
{
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
Worker::Data();
Data();

 }

 void Singer::Data()const
 {

     cout<<"skala glosu "<<pv[voice]<<endl;
 }


 void SingerWaiter::Data()const
 {

     Singer::Data();
     Waiter::Data();





 }
 void SingerWaiter::Get()
 {
     Waiter::Get();
     Singer::Get();
 }

 void SingerWaiter::Set()
 {

     cout<<"podaj imie i nazwisko spiewajacego piosenkarza: ";
     Worker::Get();
     Get();
 }

 void SingerWaiter::Show()const
 {
     cout<<"kategoria spiewajacy kelner "<<endl;
     Worker::Data();
     Data();

 }
