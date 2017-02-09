#include <iostream>

using namespace std;
class Person
{
private:
  string imie;
  string nazwisko;
  public:
      Person():imie("brak"),nazwisko("tez brak"){}
      Person(const char *i,const char *n):imie(i),nazwisko(n){}
      ~Person(){}
      virtual void Data() {cout<<"imie "<<imie<<" nazwisko "<<nazwisko<<endl;}
      virtual void Show(){Data();}


};
class Gunslinger :public Person
{
private:
    double time_reload;
    int ile_zaciec;
public:
    Gunslinger(const char *i,const char *n,const double &t,int ile):
        Person(i,n),time_reload(t),ile_zaciec(ile){}
    Gunslinger(const Person &p,const double &t, int ile):Person(p),time_reload(t),ile_zaciec(ile){}
    Gunslinger() :Person("panicz","z wasem"),time_reload(10),ile_zaciec(12){}
    ~Gunslinger(){}
    int Drav(){return time_reload;}
    virtual void Data(){ cout<<"czas wyciagania"<<time_reload<<" ilosc zaciec "<<ile_zaciec; }
    virtual void Show(){ cout<<"rewolwerowiec "<<endl; Person::Data(); Data();}
};

class PokerPlayer:virtual public Person
{
public:
    enum{MIN=1,MAX=52};
private:
    int karta;
public:

    PokerPlayer():Person("brak","danych osobowych"),karta(PokerPlayer::MAX){}
    PokerPlayer(const char *i,const char *n,int k):Person(i,n),karta(k){}
    PokerPlayer(const Person &p,int k):Person(p),karta(k){}
    ~PokerPlayer(){}

int Drav(){return karta;}
virtual void Data(){  cout<<"karta "<<karta<<endl; }
virtual void Show(){ cout<<"pokerzysta"<<endl; Person::Show();Data();}
};
class BadDude:public PokerPlayer,public Gunslinger
{
public:
    BadDude(const char *i="nic",const char *n="nie ma",int k=12,const double & t=32.1,int ile=5):
        Person(i,n),PokerPlayer(i,n,k),Gunslinger(i,n,t,ile){}
    void Gdraw(){cout<<"czas wyciagania rewolweru "<<Gunslinger::Drav()<<endl;}
    void Cdraw(){cout<<"wyjeta karta "<<PokerPlayer::Drav()<<endl;}

    void Show(){cout<<"Zły chłop "<<endl; Gunslinger::Show(); Cdraw(); }



};





int main()
{
    Person a("jestem","maczo");
    Gunslinger b("jestem ","psem",12.3,14);
    PokerPlayer c("on","i ona",13);
    BadDude d("nic","jest",13,32.4,5);

   // Person *wsk[3]={&a,&b,&c};
   // for(int i=0;i<3;i++)
   // {
   //     wsk[i]->Show();
   // }
    d.Show();
    cout << "Hello world!" << endl;
    return 0;
}
