#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;

class abstr_emp
{
    private:
    string fname;
    string lname;
    string job;
    public:
        abstr_emp();
        abstr_emp(const string & fn,const string &ln,const string & j) ;
        virtual void ShowAll(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetAll(istream &is);   //prosi uzytkownika o dane
        virtual void ShowData(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetData(istream &is);   //prosi uzytkownika o dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void SetData();   //prosi uzytkownika o dane
        friend ostream & operator<<(ostream & os,const abstr_emp & e);
        virtual ~abstr_emp() =0;
};

class employee:public abstr_emp
{

    public:
        employee();
        employee(const string & fn,const string &ln,const string & j) ;
        virtual void ShowAll(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetAll(istream &is);   //prosi uzytkownika o dane
        virtual void ShowData(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetData(istream &is);   //prosi uzytkownika o dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void SetData();   //prosi uzytkownika o dane
};

class manager:virtual public abstr_emp
{
    private:
        int incharge0f; //liczba obiektow abstr_emp,ktorymi zazadza
    protected:
        int InCharge0f()const {return incharge0f;} //wyjscie
        int & InCharge0f() {return incharge0f;} //wejscie
    public:
        manager();
        manager(const string & fn,const string &ln,const string & j,int ico=0) ;
        manager(const abstr_emp & e,int ico);
        manager(const manager & m);
        virtual void ShowAll(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetAll(istream &is);   //prosi uzytkownika o dane
        virtual void ShowData(ostream &os)const; //opisuje i wyyswietla dane
        virtual void SetData(istream &is);   //prosi uzytkownika o dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void SetData();   //prosi uzytkownika o dane
};


class fink: virtual public abstr_emp
{

private:
    string reportsto; //do kogo fink ( donosiciel) przesyla raport
protected:
    const string ReportsTo()const {return reportsto;}
    string & ReportsTo(){return reportsto;}
public:
    fink();
    fink(const string & fn,const string &ln,const string & j,const string &rpo) ;
    fink(const abstr_emp & e,string &rpo);
    fink(const fink & e);
    virtual void ShowAll(ostream &os)const; //opisuje i wyyswietla dane
    virtual void SetAll(istream &is);   //prosi uzytkownika o dane
    virtual void ShowData(ostream &os)const; //opisuje i wyyswietla dane
    virtual void SetData(istream &is);   //prosi uzytkownika o dane
    virtual void SetAll();   //prosi uzytkownika o dane
    virtual void SetData();   //prosi uzytkownika o dane
};

class highfink: public manager,public fink //glowny donosiciel
{
public:
    highfink();
    highfink(const string & fn,const string &ln,const string & j,const string &rpo,int ico) ;
    highfink(const abstr_emp & e,string &rpo,int ico);
    highfink(const manager & m,const string & rpo);
    highfink(const highfink &h);
    virtual void ShowAll(ostream &os)const; //opisuje i wyyswietla dane
    virtual void SetAll(istream &is);   //prosi uzytkownika o dane
    virtual void ShowData(ostream &os)const; //opisuje i wyyswietla dane
    virtual void SetData(istream &is);   //prosi uzytkownika o dane
    virtual void SetAll();   //prosi uzytkownika o dane
    virtual void SetData();   //prosi uzytkownika o dane
};

int show_menu();
void fill_abstr_emp(istream &is,abstr_emp *wsk,int status);
inline void czystka() {while(cin.get()!='\n') continue; }

const int  max_person=10;
const char* name="baza.txt";
enum {nic=0,pracownik,managerr,donosiciel,glowny_donosiciel,koniec};
unsigned int statusy[max_person]{0};
int ile_zajetych=0;
abstr_emp *wsk[max_person];

int main()
{
fstream plik;

plik.open(name,ios_base::in|ios_base::app);

if(!plik.is_open())
{
    cerr<<"nie udalo sie otworzyc pliku "<<name<<" koncze program "<<endl;
    exit(EXIT_FAILURE);
}

if(plik>>ile_zajetych&&ile_zajetych>0)
{
   cout<<"oto zawartosc pliku,"<<endl;

   for(int u=0;u<max_person;u++)
   {
       plik>>statusy[u];
   }

   cout<<ile_zajetych<<" zajetych na max "<<max_person<<" objektow :"<<endl;


   for(int j=0;j<max_person;j++)
   {

      switch(statusy[j])
       {
        case nic                :                                                               break;
        case pracownik          : wsk[j]=new employee;                                          break;
        case managerr           : wsk[j]=new manager;                                           break;
        case donosiciel         : wsk[j]=new fink;                                              break;
        case glowny_donosiciel  : wsk[j]=new highfink;                                          break;
        default                 : cout<<"cos nie tak ze statusem obiektu "<<j+1<<" !"<<endl;    break;
       }
   }

   for(int k=0;k<ile_zajetych;k++)
   {
       fill_abstr_emp(plik,wsk[k],statusy[k]);
   }
   for(int l=0;l<ile_zajetych;l++)
   {
       wsk[l]->ShowAll(cout);
   }
}

else
{
    cout<<"plik jest pusty"<<endl;
}
plik.close();
plik.clear();
plik.open(name,ios_base::out);

cout<<"chcesz dodac czy usunąć pozycje <d/u>";
char wybor;
cin.get(wybor);
while(!strchr("du",wybor))
{
    cout<<"popraw sie!\n";
    cin.get(wybor);
}
cin.clear();
czystka();
int jaki;
if(wybor=='d')
{
    for(int m=ile_zajetych;m<max_person;m++)
    {
       jaki=show_menu();


       switch(jaki)
       {

        case nic                :                                                                 statusy[m]=jaki;             break;
        case pracownik          : wsk[m]=new employee;    wsk[m]->SetAll();    ile_zajetych++;    statusy[m]=jaki;             break;
        case managerr           : wsk[m]=new manager;     wsk[m]->SetAll();    ile_zajetych++;    statusy[m]=jaki;             break;
        case donosiciel         : wsk[m]=new fink;        wsk[m]->SetAll();    ile_zajetych++;    statusy[m]=jaki;             break;
        case glowny_donosiciel  : wsk[m]=new highfink;    wsk[m]->SetAll();    ile_zajetych++;    statusy[m]=jaki;             break;
        default: cout<<"koniec\n";                                                                                             break;


       }
       if(jaki==koniec)
        break;

    }
}
if(wybor=='u')
{

    while(1)
    {
          cout<<"kontynuowac czy zakonczyc k/z:\n";
          char kont;
          cin.get(kont);
          if(kont=='z')
            break;
          else
          {
              if(ile_zajetych==0)
              {
                  cout<<"nie ma czego usuwac \n";
                  break;
              }

            cout<<"ktory objekt chcesz usunac:";
            int number;
            cin>>number;
            cin.clear();
            czystka();
            while(!cin||number<1)
                {
                 cout<<"popraw sie:\n";
                cin>>number;
                 cin.clear();
                czystka();

                }
                if(statusy[number-1]==0)
                {
                cout<<"nie mozna usunac tego obiektu gdyz nie istnieje!!\n";
                continue;
                }
                delete wsk[number-1];
                statusy[number-1]=0;
                cout<<"obiekt nr "<<number<<" usuniety\n";
                ile_zajetych--;

          }
    }
}
plik<<ile_zajetych;
plik<<" ";
for(int m=0;m<max_person;m++)
{
    plik<<statusy[m];
    plik<<" ";
}
plik<<'\n';
for(int n=0;n<max_person;n++)
{

    switch(statusy[n])
    {
        case nic                :    plik<<'\n';                                                   break;
        case pracownik          :    wsk[n]->ShowAll(plik);                                        break;
        case managerr           :    wsk[n]->ShowAll(plik);                                        break;
        case donosiciel         :    wsk[n]->ShowAll(plik);                                        break;
        case glowny_donosiciel  :    wsk[n]->ShowAll(plik);                                        break;
        default                 : cout<<"cos nie tak ze statusem obiektu "<<n+1<<" !"<<endl;       break;

    }
}
plik.close();
    return 0;
}

int show_menu()
{
    cout<<"podaj jaki obiekt chcesz utworzyc do wyboru masz:      \n";
    cout<<"0)nic                         1)pracownik              \n";
    cout<<"2)managerr                    3)donosiciel             \n";
    cout<<"4)glowny donosiciel           5)koniec                 \n";
    int ch;
    cin>>ch;
    cin.clear();
    czystka();
    while(ch!=0&&ch!=1&&ch!=2&&ch!=3&&ch!=4&&ch!=5)
    {
        cout<<"popraw sie:\n";
        cin>>ch;
        cin.clear();
        czystka();
    }
    return ch;
}

void fill_abstr_emp(istream &is,abstr_emp *wsk,int status)
{
    switch(status)
    {
        case nic:                                                   break;
        case pracownik:                     wsk->SetAll(is);        break;
        case managerr:                      wsk->SetAll(is);        break;
        case glowny_donosiciel:             wsk->SetAll(is);        break;
        default: cout<<"nieprawidlowy status!!\n";                  break;
    }
}

        abstr_emp::abstr_emp():fname("rafael"),lname("kon"),job("sraka")
        {

        }

        abstr_emp::abstr_emp(const string & fn,const string &ln,const string & j):
            fname(fn),lname(ln),job(j)
        {

        }

        void abstr_emp::ShowAll(ostream &os)const //opisuje i wyyswietla dane
        {
            ShowData(os);
        }

        void abstr_emp::SetAll(istream &is)  //prosi uzytkownika o dane
        {
          SetData(is);
        }

         void   abstr_emp::SetAll()  //prosi uzytkownika o dane
        {
          SetData();
        }

        ostream & operator<<(ostream & os,const abstr_emp & e)
        {

            os<<"imie: "<<e.fname<<endl;
            os<<"nazwisko: "<<e.lname<<endl;
            os<<"praca: "<<e.job<<endl;
            return os;
        }

        abstr_emp::~abstr_emp()
        {

        }

        void abstr_emp::ShowData(ostream &os)const //opisuje i wyyswietla dane
        {
            if(os==cout)
            os<<"imie";
            os<<fname<<endl;
               if(os==cout)
             os<<"nazwisko";
            os<<lname<<endl;
            if(os==cout)
            os<<"praca" ;
            os<<job<<endl;
        }

         void abstr_emp::SetData(istream &is)   //prosi uzytkownika o dane
        {
            getline(is,fname);
            getline(is,lname);
            getline(is,job);
        }

        void abstr_emp::SetData()   //prosi uzytkownika o dane
        {
            cout<<"podaj imie: "<<endl;
            getline(cin,fname);
             cout<<"podaj nazwisko: "<<endl;
            getline(cin,lname);
             cout<<"podaj prace: "<<endl;
            getline(cin,job);
        }

        employee::employee():abstr_emp("piotr","bu","inf")
        {

        }

        employee::employee(const string & fn,const string &ln,const string & j):abstr_emp(fn,ln,j)
        {

        }

        void employee::ShowAll(ostream &os)const //opisuje i wyyswietla dane
        {
           ShowData(os);
           abstr_emp::ShowData(os);

        }

        void employee::SetAll(istream &is)  //prosi uzytkownika o dane
        {
           SetData(is);
        }

        void employee::SetAll()  //prosi uzytkownika o dane
        {

           SetData();
        }

        void employee::ShowData(ostream &os)const //opisuje i wyyswietla dane
        {
            if(os==cout)
        os<<"pracownik"<<endl;
        }

        void employee::SetData(istream &is)  //prosi uzytkownika o dane
        {
          abstr_emp::SetData(is);
        }

        void employee::SetData()  //prosi uzytkownika o dane
        {
          abstr_emp::SetData();
        }

        manager::manager():abstr_emp("kon","rafal","gnojarz"),incharge0f(1)
        {

        }

        manager::manager(const string & fn,const string &ln,const string & j,int ico):abstr_emp(fn,ln,j),incharge0f(ico)
        {

        }

        manager::manager(const abstr_emp & e,int ico):abstr_emp(e),incharge0f(ico)
        {

        }

        manager::manager(const manager & m):abstr_emp(m)
        {
            incharge0f=m.incharge0f;
        }

        void  manager::ShowAll(ostream &os)const //opisuje i wyyswietla dane
        {

        ShowData(os);
        abstr_emp::ShowData(os);

        }

        void  manager::SetAll(istream &is)   //prosi uzytkownika o dane
        {
          SetData(is);
          abstr_emp::SetData(is);

        }

        void  manager::SetAll()   //prosi uzytkownika o dane
        {

          abstr_emp::SetData();
          SetData();

        }

        void manager::ShowData(ostream &os)const //opisuje i wyyswietla dane
        {
            if(os==cout)
            os<<"manager "<<endl;
            if(os==cout)
            os<<" liczba objektor abstr ";
            os<<incharge0f<<endl;
        }

        void manager::SetData(istream &is)   //prosi uzytkownika o dan
        {
            int temp;
            is>>temp;
            incharge0f=temp;
        }

        void manager::SetData()   //prosi uzytkownika o dan
        {
             cout<<"podaj liczbe objektow abstr_emp: "<<endl;
            int temp;
            cin>>temp;
            incharge0f=temp;
        }

        fink::fink():abstr_emp("rafalek","konik","gownojad"),reportsto("do klawisza")
        {

        }

        fink::fink(const string & fn,const string &ln,const string & j,const string &rpo):abstr_emp(fn,ln,j),reportsto("do ciecia")
        {

        }

        fink::fink(const abstr_emp & e,string &rpo):abstr_emp(e),reportsto(rpo)
        {

        }

        fink::fink(const fink & e):abstr_emp(e)
        {
            reportsto="ale jajca";
        }

        void fink::ShowAll(ostream &os)const //opisuje i wyyswietla dane
        {
         ShowData(os);
         abstr_emp::ShowData(os);

        }
        void     fink::SetAll(istream &is)  //prosi uzytkownika o dane
        {
          SetData(is);
          abstr_emp::SetData(is);

        }

        void fink::SetAll()  //prosi uzytkownika o dane
        {
          abstr_emp::SetData();
          SetData();
        }

         void fink::ShowData(ostream &os)const //opisuje i wyyswietla dane
        {
            if(os==cout)
            os<<" donosiciel donosi do:"<<endl;
            os<<reportsto<<endl;
        }

         void fink::SetData(istream &is)   //prosi uzytkownika o dane
        {
            getline(is,reportsto);
        }

        void fink::SetData()   //prosi uzytkownika o dane
        {
            cout<<"podaj do kogo donosisz "<<endl;
            getline(cin,reportsto);
        }

        highfink::highfink():
            abstr_emp("konik","rafalek","elo"),manager("konik","rafalek","elo",12),fink("konik","rafalek","elo","debil")
        {

        }

        highfink::highfink(const string & fn,const string &ln,const string & j,const string &rpo,int ico):
            abstr_emp(fn,ln,j),manager(fn,ln,j,ico),fink(fn,ln,j,rpo)
        {

        }

        highfink::highfink(const abstr_emp & e,string &rpo,int ico):abstr_emp(e),manager(e,ico),fink(e,rpo)
        {

        }

        highfink::highfink(const manager & m,const string & rpo):abstr_emp(m),manager(m),fink("konik","rafalek","swiniarka",rpo)
        {

        }

        highfink::highfink(const highfink &h):abstr_emp(h),manager(h),fink(h)
        {

        }

        void highfink::ShowAll(ostream &os)const //opisuje i wyyswietla dane
        {

            manager::ShowAll(os);
            fink::ShowData(os);
        }

        void highfink::SetAll(istream &is)  //prosi uzytkownika o dane
        {

         manager::SetAll(is);
         fink::SetData(is);
        }
        void highfink::SetAll()  //prosi uzytkownika o dane
        {
         manager::SetAll();
         fink::SetData();
        }

        void highfink::ShowData(ostream &os)const //opisuje i wyyswietla dane
        {
            if(os==cout)
            os<<"glowny donosiciel "<<endl;
        }

        void highfink::SetData(istream &is)   //prosi uzytkownika o dane
        {

        }

        void highfink::SetData()   //prosi uzytkownika o dane
        {

        }





