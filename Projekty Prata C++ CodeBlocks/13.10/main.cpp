#include <iostream>
#include <string>

using namespace std;
typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();
void restore(format f,precis p);
class Brass
{
private:
    string fullname;
    long acctNum;
    double balance;
public:
    Brass(const string &s="brak",long an=-1,double bal=0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
     double Balance()const;
    virtual void ViewAcct()const;
    virtual ~Brass(){}



};

class BrassPlus: public Brass
{

private:
    double maxloan;
    double rate;
    double owesbank;
public:
    BrassPlus(const string &s="brak",long an=-1,double bal=0.0,double ml=2000,double r=0.11125);
    BrassPlus(const Brass &ba,double ml=2000,double r=0.11125);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m){maxloan=m;}
    void ResetRate(double r){rate=r;}
    void ResetOwes(){owesbank=0;}

};
const int CLIENTS=4;
int main()
{
 Brass *p_clients[CLIENTS];
 string temp;
 long tempnum;
 double tempbal;
 int kind;
 for(int i=0;i<CLIENTS;i)
 {
     cout<<"podaj imie i nazwkisko klienta:";
     getline(cin,temp);
     cout<<"podaj numer rachunku klienta:";
     cin>>tempnum;
     cout<<"podaj stan poczatkowy konta:";
     cin>>tempbal;
     cout<<"wpisz 1 dla rachunku Brass lub "
     <<"2 dla rachunku BrassPlus:"<<endl;
     while(cin>>kind&&(kind!=1&&kind!=2))
        cout<<"wpisz 1 lub 2"<<endl;
     if(kind==1)

         p_clients[i]=new Brass(temp,tempnum,tempbal);
         else
         {
            double tmax,trate;
         cout<<"podaj limit debetu";
         cin>>tmax;
         cout<<"podaj stope oprocentowania"
         <<"jako ulamek dziesietny:";
         cin>>trate;
         p_clients[i]=new BrassPlus(temp,tempnum,tempbal,tmax,trate);

         }
         while(cin.get()!='\n')
            continue;

     }
     cout<<endl;
     for(int i=0;i<CLIENTS;i++)
     {

         p_clients[i]->ViewAcct();
         cout<<endl;
     }
     for(int i=0;i<CLIENTS;i++)
     {

         delete p_clients[i];
     }
     cout<<"gotowe "<<endl;

return 0;



 }





















  Brass::Brass(const string &s,long an,double bal)
  {
      fullname=s;
      acctNum=an;
      balance=bal;

  }
    void Brass::Deposit(double amt)
    {
        if(amt<0)
            cout<<"nie mozna wplacic ujemnej kwoty"
            <<"wplata anulowana.\n";
            else
                balance+=amt;


    }
     void Brass::Withdraw(double amt)
    {
        format initialise=setFormat();
        precis prec=cout.precision();
        if(amt<0)
        {
            cout<<"nie mozna wyplacic ujemnej kwoty.\n"
            <<"wyplata anulowana"<<endl;
        }
        else if(amt<=balance)
            balance-=amt;
        else
            cout<<"zadana suma"<<amt<<" przekracza dostepne srodki.\n"
            <<"wyplata anulowana.\n";
        restore(initialise,prec);

    }
     double Brass::Balance()const
    {
        return balance;
    }
    void Brass::ViewAcct()const
    {
format initialize=setFormat();
precis prec=cout.precision(2);
cout<<"klient "<<fullname<<endl;
cout<<"numer rachunku "<<acctNum<<endl;
cout<<"stan konta "<<balance<<endl;
restore(initialize,prec);
    }

format setFormat()
{
    return cout.setf(ios_base::fixed,ios_base::floatfield);

}
void restore(format f,precis p)
{
    cout.setf(f,ios_base::floatfield);
    cout.precision(p);
}



   BrassPlus::BrassPlus(const string &s,long an,double bal,double ml,double r):Brass(s,an,bal)
   {
       maxloan=ml;
       rate=r;
       owesbank=0.0;
   }
    BrassPlus::BrassPlus(const Brass &ba,double ml,double r):Brass(ba)
    {
        maxloan=ml;
        rate=r;
        owesbank=0.0;
    }

    void BrassPlus::ViewAcct()const
    {
        format initializer=setFormat();
        precis prec=cout.precision(2);
        Brass::ViewAcct();
        cout<<"limit debetu "<<maxloan<<" zl "<<endl;
        cout<<"kwota zadluzenia "<<owesbank<< " zl"<<endl;
        cout.precision(3);
        cout<<" stopa oprocentowania "<<100*rate<<endl;
        restore(initializer,prec);


    }
    void BrassPlus::Withdraw(double amt)
    {
        format initializer=setFormat();
        precis prec=cout.precision(2);
        double bal=Balance();
        if(amt<=bal)
            Brass::Withdraw(amt);
        else if(amt<=bal+maxloan-owesbank)
        {
            double advance=amt-bal;
            owesbank+=advance*(1.0+rate);
            cout<<"zadluzenie faktyczne: "<<advance<<" zl" <<endl;
            cout<<"odsetki "<<advance*rate<<" zl"<<endl;
            Deposit(advance);
            Brass::Withdraw(amt);
        }
        else
            cout<<"przekroczony limit debetu.Operacja anulowana.\n";
        restore(initializer,prec);


    }

