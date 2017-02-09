#include <iostream>
#include <string>

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
        virtual void ShowAll()const; //opisuje i wyyswietla dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void ShowData()const; //opisuje i wyyswietla dane
        virtual void SetData();   //prosi uzytkownika o dane
        friend ostream & operator<<(ostream & os,const abstr_emp & e);
        virtual ~abstr_emp() =0;


};



class employee:public abstr_emp
{

    public:
        employee();
        employee(const string & fn,const string &ln,const string & j) ;
        virtual void ShowAll()const; //opisuje i wyyswietla dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void ShowData()const; //opisuje i wyyswietla dane
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
        virtual void ShowAll()const; //opisuje i wyyswietla dane
        virtual void SetAll();   //prosi uzytkownika o dane
        virtual void ShowData()const; //opisuje i wyyswietla dane
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
    virtual void ShowAll()const; //opisuje i wyyswietla dane
    virtual void SetAll();   //prosi uzytkownika o dane
    virtual void ShowData()const; //opisuje i wyyswietla dane
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
    virtual void ShowAll()const; //opisuje i wyyswietla dane
    virtual void SetAll();   //prosi uzytkownika o dane
    virtual void ShowData()const; //opisuje i wyyswietla dane
    virtual void SetData();   //prosi uzytkownika o dane




};








int main()
{
    employee em("Tadeusz","Hubert","Sprzedawca");
    cout<<em<<endl;
    em.ShowAll();
    manager ma("Amforiusz","Smoczewski","Malarz",5);
    cout<<ma<<endl;
    ma.ShowAll();
    fink fi("Maurycy","Okulski","Hydraulik","Julian Bar");
    cout<<fi<<endl;
    fi.ShowAll();
    highfink hf(ma,"jan Kudlaty");
    hf.ShowAll();
    cout<<"wcisnij dowolny klawisz aby kontynuowac :\n";
    cin.get();
    while(cin.get()!='\n')
        continue;
    highfink hf2;
    hf2.SetAll();
    cout<<"uzywa skaznika abstr_emp * \n";
    abstr_emp *tri[4]={&em,&fi,&hf,&hf2};
    for(int i=0;i<4;i++)
    {
        tri[i]->ShowAll();
    }
















    return 0;
}

        abstr_emp::abstr_emp():fname("rafal"),lname("kon"),job("sraka")
        {

        }
        abstr_emp::abstr_emp(const string & fn,const string &ln,const string & j):
            fname(fn),lname(ln),job(j)
        {

        }
        void   abstr_emp::ShowAll()const //opisuje i wyyswietla dane
        {
            ShowData();


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
        void abstr_emp::ShowData()const //opisuje i wyyswietla dane
        {
            cout<<"imie" <<fname<<endl;
            cout<<"nazwisko" <<lname<<endl;
            cout<<"praca" <<job<<endl;
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
        void employee::ShowAll()const //opisuje i wyyswietla dane
        {
           ShowData();
           abstr_emp::ShowData();



        }
        void employee::SetAll()  //prosi uzytkownika o dane
        {
           SetData();
        }
         void employee::ShowData()const //opisuje i wyyswietla dane
        {
        cout<<"pracownik"<<endl;
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
        void  manager::ShowAll()const //opisuje i wyyswietla dane
        {

        ShowData();
        abstr_emp::ShowData();


        }
        void  manager::SetAll()   //prosi uzytkownika o dane
        {
          abstr_emp::SetData();
          SetData();


        }
         void manager::ShowData()const //opisuje i wyyswietla dane
        {
            cout<<"manager "<<endl;
            cout<<" liczba objektor abstr *"<<incharge0f<<endl;

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
        void     fink::ShowAll()const //opisuje i wyyswietla dane
        {


;
        }
        void     fink::SetAll()  //prosi uzytkownika o dane
        {
          abstr_emp::SetData();
          SetData();

        }
         void fink::ShowData()const //opisuje i wyyswietla dane
        {
             cout<<" fink "<<endl;
             cout<<"donosze do: "<<reportsto<<endl;


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

        void highfink::ShowAll()const //opisuje i wyyswietla dane
        {

            manager::ShowAll();
            fink::ShowData();


        }

        void highfink::SetAll()  //prosi uzytkownika o dane
        {

         manager::SetAll();
         fink::SetData();





        }
         void highfink::ShowData()const //opisuje i wyyswietla dane
        {
            cout<<"glowny donosiciel "<<endl;
        }
         void highfink::SetData()   //prosi uzytkownika o dane
        {

        }





