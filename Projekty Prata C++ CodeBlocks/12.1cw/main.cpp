#include <iostream>
#include <cstring>


using namespace std;
class Cow{
private:

char name[20];
char *hobby;
double weight;
public:
    Cow();
    Cow(const Cow &a);
    Cow(const char *nm,const char *ho,double wt);
    ~Cow();
    Cow &operator=(const Cow & c);
    void show_cow()const;


};
int main()
{


    Cow masa1("zygala","sranie",71);
    masa1.show_cow();
    Cow masa2;
    masa2.show_cow();
    Cow masa3=masa1;
    masa3.show_cow();
    masa2=masa1;
    masa1.show_cow();










    return 0;
}

 Cow::Cow()
 {
     strcpy(name,"testowy");
     hobby=new char[1];
     hobby[0]='\0';
     weight=120;

 }
 Cow::Cow(const Cow &a)
 {

     int len=strlen(a.hobby);
     hobby=new char[len+1];
     strcpy(name,a.name);
     strcpy(hobby,a.hobby);
     weight=a.weight;
 }
    Cow::Cow(const char *nm,const char *ho,double wt)
    {
        strcpy(name,nm);
        int len=strlen(ho);
        hobby=new char[len+1];
        strcpy(hobby,ho);
        weight=wt;

    }
    Cow::~Cow()
    {
        delete []hobby;


    }
    Cow & Cow::operator=(const Cow & c)
    {
        int len=strlen(c.hobby);
        delete[]hobby;
        hobby=new char[len+1];
        strcpy(hobby,c.hobby);
        strcpy(name,c.name);
        weight=c.weight;
        return *this;

    }
    void Cow::show_cow()const
    {
        cout<<"imie: "<<name<<endl;
        cout<<"hobby: "<<hobby<<endl;
        cout<<"masa cielska: "<<weight<<endl;


    }
