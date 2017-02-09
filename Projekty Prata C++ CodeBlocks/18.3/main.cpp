#include <iostream>
class Useless
{

private:
    int n;
    char *pc;
    static int ct;
    void ShowObject()const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k,char ch);
    Useless(const Useless &us);
    Useless(Useless &&us);
    ~Useless();
    Useless operator+(const Useless &f)const;
    Useless & operator=(const Useless &f);
    Useless & operator=(Useless &&f);
    void ShowData()const;



};
int Useless::ct=0;
using namespace std;

int main()
{
    Useless one(10,'x');
    Useless two=one+one;

    cout<<"obiekt one:.";
    one.ShowData();
    cout<<"obiekt two:.";
    two.ShowData();
    Useless three,four;
    cout<<"three=one"<<endl;
    three=one;
    cout<<"teraz obiekt three: "<<endl;
    three.ShowData();
    cout<<"a obiekt one= "<<endl;
    one.ShowData();
    cout<<"four=one+two\n";
    four=one+two;
    cout<<"teraz obiekt four= "<<endl;
    four.ShowData();
    cout<<"four=move(one)\n";
    four=move(one);
    cout<<"teraz obiekt four= "<<endl;
    four.ShowData();
    cout<<"a obiekt one =";
    one.ShowData();


    return 0;
}
  Useless::Useless()
  {
    ++ct;
    n=0;
    pc=nullptr;
    cout<<"konstruktor domyslny,liczba objektow: "<<ct<<endl;
    ShowObject();
  }

Useless::Useless(int k):n(k)
{
++ct;
cout<<"konstruktor (int); liczba objektow: "<<ct<<endl;
pc=new char [n];
ShowObject();
}
     Useless::Useless(int k,char ch):n(k)
     {
++ct;
cout<<"konstruktor (int,char); liczba objektow: "<<ct<<endl;
pc=new char [n];
for(int i=0;i<n;i++)
    pc[i]=ch;
ShowObject();
     }
     Useless::Useless(const Useless &us): n(us.n)
     {
++ct;
cout<<"konstruktor kopiujacy, liczba objektow: "<<ct<<endl;
pc=new char[n];
for(int i=0;i<n;i++)
{
    pc[i]=us.pc[i];

}
 ShowObject();
     }
     Useless::Useless(Useless &&us):n(us.n)
     {
++ct;
cout<<"konstruktor przenoszacy, liczba objektow: "<<ct<<endl;
pc=new char[n];
pc=us.pc;
us.pc=nullptr;
us.n=0;

ShowObject();

     }
     Useless::~Useless()
     {
cout<<"destruktor, liczba objektow "<<--ct<<endl;
cout<<"usuwany objekt:\n";
ShowObject();
delete []pc;
     }
     Useless Useless::operator+(const Useless &f)const
     {
cout<<"wejscie do operatora +()\n";
Useless temp=Useless(n+f.n);
for(int i=0;i<n;i++)
    temp.pc[i]=pc[i];
for(int i=n;i<temp.n;i++)
    temp.pc[i]=f.pc[i-n];
cout<<"objekt tymczasowy:\n";
cout<<"wyjscie z operatora +()\n";
return temp;
     }
    void Useless::ShowData()const
    {
if(n==0)
    cout<<"objekt pusty";
else
{
  for(int i=0;i<n;i++)
        cout<<pc[i];
}
cout<<endl;

    }
    void Useless::ShowObject()const
    {
        cout<<"liczba elementow "<<n<<endl;
        cout<<",adres danych: "<<(void*)pc<<endl;
    }
    Useless & Useless::operator=(const Useless &f)
    {
      cout<<"kopiujacy operator przypisania:\n";
      if(this==&f)
        return *this;
      delete []pc;
      n=f.n;
      pc=new char[n];
      for(int i=0;i<n;i++)
      {
          pc[i]=f.pc[i];
      }
      return *this;
    }

    Useless & Useless::operator=(Useless &&f)
    {
       cout<<"przenoszacy operator przypisania:\n";
       if(this==&f)
        return *this;
       delete []pc;
       n=f.n;
       pc=f.pc;
       f.n=0;
       f.pc=nullptr;
       return *this;
    }
