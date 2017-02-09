#include <iostream>
#include <string>

using namespace std;
class Cpmw
{
public:
    struct Info
    {
        string qcode;
        string zcode;
    };
private:
    Info *pi;
public:
    Cpmw();
    Cpmw(const string & q,const string & z);
    Cpmw(const Cpmw & cp);
    Cpmw(Cpmw && mv);
    ~Cpmw();
    Cpmw & operator=(const Cpmw & cp);
    Cpmw & operator=(Cpmw && mv);
    Cpmw operator+(const Cpmw & obj)const;
    void Display()const;


};
int main()
{

    Cpmw a1;
    Cpmw a2("ale","napis");
    Cpmw a3(a2);
    Cpmw a4=move(a1+a2);
    Cpmw a5=a2+a3;
    Cpmw a6= a2+(a3+a4);
    a3=a1;
    a4=move(a2+a1);

    return 0;
}
    Cpmw::Cpmw()
    {
      pi=new Info;
      pi->qcode="domyslny";
      pi->zcode="obiekt";
      cout<<"konstruktor domyslny"<<endl;
    }
    Cpmw::Cpmw(const string & q,const string & z)
    {
      pi=new Info;
      pi->qcode=q;
      pi->zcode=z;
    cout<<"konstruktor z wartosciami"<<endl;
    }
    Cpmw::Cpmw(const Cpmw & cp)
    {
      pi=new Info;
      pi->qcode=cp.pi->qcode;
      pi->zcode=cp.pi->zcode;
    cout<<"konstruktor kopiujacy"<<endl;
    }
    Cpmw::Cpmw(Cpmw && mv)
    {
      pi=new Info;
      pi->qcode=mv.pi->qcode;
      pi->zcode=mv.pi->zcode;
      delete mv.pi;
    cout<<"konstruktor przenosz¹cy"<<endl;
    }
    Cpmw::~Cpmw()
    {
       delete pi;
       cout<<"destruktor"<<endl;
    }
    Cpmw & Cpmw::operator=(const Cpmw & cp)
    {
           cout<<"operator przypisania"<<endl;
        if(this==&cp)
        return *this;
        delete pi;
        pi=new Info;
        pi->qcode=cp.pi->qcode;
        pi->zcode=cp.pi->zcode;
        return *this;
    }
    Cpmw & Cpmw::operator=( Cpmw && mv)
    {
      cout<<"operator przenosz¹cy"<<endl;
        if(this==&mv)
        return *this;
        delete pi;
        pi=new Info;
        pi->qcode=mv.pi->qcode;
        pi->zcode=mv.pi->zcode;
        delete mv.pi;
        return *this;
    }
    Cpmw Cpmw::operator+(const Cpmw & obj)const
    {
         cout<<"konstruktor dodawania"<<endl;
        Cpmw temp(pi->qcode+obj.pi->qcode,pi->zcode+obj.pi->zcode);
        return temp;


    }
    void Cpmw::Display()const
    {
        cout<<pi->qcode<<" "<<pi->zcode<<endl;

    }
