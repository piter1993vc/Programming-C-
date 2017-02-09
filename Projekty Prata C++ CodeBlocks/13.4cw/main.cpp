#include <iostream>
#include <cstring>

using namespace std;
class Port
{

private:
    char *brand;
    char style[20];
    int bottles;
public:
    Port(const char *br="Brak",const char *st="brak",int b=0);
    Port(const Port & p);
    virtual ~Port(){delete []brand;}
    Port & operator=(const Port &p);
    Port &operator+=(int b);//dodaje do bootles
    Port &operator-=(int b); //odejmuje b od bootles jesli ta operacjha jest mozliwea
    int BootlesCount() const {return bottles;}
    virtual void Show()const;
    friend ostream &operator<<(ostream & os,const Port &p);

};
class VintagePort : public Port
{
    private:
    char *nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char *br,const char *st,int b,const char *nn,int y);
    VintagePort(const VintagePort &vp);
    VintagePort(const Port &vp,char *nn,int y);
    ~VintagePort(){delete []nickname;}
    VintagePort &operator=(const VintagePort & vp);
    void Show()const;
    friend ostream & operator<<(ostream &os,const VintagePort &vp);
};
int main()
{
    Port wino1("nowe","winko",123);
    cout<<wino1<<endl;
    wino1.Show();
    VintagePort wino2("nowe2","winko2",120,"kare",2016)  ;
    cout<<wino2<<endl;
    wino2.Show();
    wino1+=3;
    wino1.Show();
    cout << "Hello world!" << endl;
    return 0;
}
    Port::Port(const char *br,const char *st,int b)
    {
    brand=new char[strlen(br)+1];
    strcpy(brand,br);
    strcpy(style,st);
    bottles=b;
    }
    Port::Port(const Port & p)
    {
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles=p.bottles;

    }

    Port & Port::operator=(const Port &p)
    {
        if(this==&p)
            return *this;
        delete[]brand;
        brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles=p.bottles;
    return *this;

    }
    Port & Port::operator+=(int b)
    {
        bottles+=b;
        return *this;
    }

    Port & Port::operator-=(int b)
    {
        if(b>=0&&b<=bottles)
        {
            bottles-=b;
           return *this;
        }

         else
            return *this;
    }


     void Port::Show()const
     {
         cout<<"brand: "<<brand<<endl;
         cout<<"style: "<<style<<endl;
         cout<<"bootles: "<<bottles<<endl;
     }
     ostream & operator<<(ostream & os,const Port &p)
    {


      os<<"brand: "<<p.brand<<endl;
         os<<"style: "<<p.style<<endl;
         os<<"bootles: "<<p.bottles<<endl;
        return os;
    }
    VintagePort::VintagePort():Port("brak","brak",0)
    {
        nickname=new char[1];
        nickname[0]='\0'; year=2000;
    }
    VintagePort::VintagePort(const char *br,const char *st,int b,const char *nn,int y):Port(br,st,b)
    {
        nickname=new char[strlen(nn)+1];
        strcpy(nickname,nn);
        year=y;
    }
    VintagePort::VintagePort(const VintagePort &vp):Port(vp)
    {
        nickname=new char[strlen(vp.nickname)+1];
        strcpy(nickname,vp.nickname);
        year=vp.year;

    }
    VintagePort::VintagePort(const Port &vp,char *nn,int y):Port(vp)
    {

        nickname=new char[strlen(nn)+1];
        strcpy(nickname,nn);
        year=y;
    }

    VintagePort & VintagePort::operator=(const VintagePort & vp)
    {
        if(this==&vp)
            return *this;
        delete[]nickname;
        Port::operator=(vp);
        nickname=new char[strlen(vp.nickname)+1];
        strcpy(nickname,vp.nickname);
        year=vp.year;
        return *this;
    }
    void VintagePort::Show()const
    {
        Port::Show();
        cout<<"nickname: "<<nickname<<endl;
        cout<<"year: "<<year<<endl;
    }
     ostream & operator<<(ostream &os,const VintagePort &vp)
     {
         os<<(Port &)vp;
         os<<"nickname: "<<vp.nickname<<endl;
         os<<"year: "<<vp.year<<endl;
         return os;
     }

