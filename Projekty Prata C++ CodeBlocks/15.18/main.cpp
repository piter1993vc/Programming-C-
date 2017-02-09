#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
private:
    int hold;
public:
    Grand(int ii=0):hold(ii){}
    virtual void speak()const {cout<<"jestem klasa grand!";}
    virtual int value()const {return hold;}


};
class Superb: public Grand
{
public:
    Superb(int h=0):Grand(h){}
    virtual void speak()const {cout<<"jestem klasa superb";}
     virtual void say()const {cout<<"jestem klasa superb ktora przechowuje wartosc "<<value()<<endl;}


};

class Magnificient: public Superb
{
private:
    char ch;
public:
    Magnificient(int h=0,char c='A'):Superb(h),ch(c){}
    virtual void speak()const {cout<<"jestem klasa magnificient";}
      void say()const {cout<<"przechowuje znak "<<ch<<" oraz liczbe "<<value()<<endl;}



};
Grand * getone();
int main()
{

    srand(time(0));
    Grand *pg;
    Superb *ps;
    for(int i=0;i<5;i++)
    {
        pg=getone();
        cout<<"teraz przetwarzam obiekt typu "<<typeid(*pg).name()<<endl;
        pg->speak();
        if(ps=dynamic_cast<Superb*>(pg))
            ps->say();
            if(typeid(Magnificient)==typeid(*pg))
                cout<<"tak jestem wspaniala"<<endl;

    }

    cout << "Hello world!" << endl;
    return 0;
}
 Grand * getone()
 {

     Grand *p;
     switch(rand()%3)
     {
     case 0: p=new Grand(rand()%100); break;
     case 1: p=new Superb(rand()%100); break;
     case 2: p=new Magnificient(rand()%100,'A'+rand()%26); break;

     }
     return p;
 }
