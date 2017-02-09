#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>


using namespace std;
const double rect_to_deg=45.0/atan(1.0);
class Vector{
public :
    enum Mode{RECT,POL};
private:
    double x;
    double y;
    double mag;
    double ang;
    Mode mode;
    void set_mag();
    void set_ang();
    void set_x();
    void set_y();

public:
    Vector();
    Vector(double n1,double n2,Mode form=RECT);
    void reset(double n1,double n2,Mode form=RECT);
    ~Vector();
    double xval()const {return x;}
    double yval()const {return y;}
    double magval()const {return mag;}
    double angval()const {return ang;}
    void polar_mode();
    void rect_mode();
    Vector operator+(const Vector &b)const;
    Vector operator-(const Vector &b)const;
    Vector operator-()const;
    Vector operator*(double val)const;
    friend Vector operator*(double val,const Vector &b);
    friend ostream & operator<<(ostream & os,const Vector &b);



};
int main()
{
ofstream plik;
plik.open("sprawdzenie.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dsteps;
    cout<<"podaj dystans do przejscia(k,aby zakonczyc):";


    while(cin>>target)
    {
        cout<<"podaj dlugosc kroku: ";
        if(!(cin>>dsteps))
            break;
            plik<<"Dystans do przejścia: "<<target<<", dlugosc kroku: "<<dsteps<<endl;

        while(result.magval()<target)
        {

plik<<steps<<":(x,y)="<<"("<<result.xval()<<","<<result.yval()<<")"<<endl;
            direction=rand()%360;
            step.reset(dsteps,direction,Vector::POL);
            result=result+step;
            steps++;

        }
        cout<<"po "<<steps<<" krokach delikwent osiagnal polozenie:\n";
        plik<<"po "<<steps<<" krokach delikwent osiagnal polozenie:\n";
        plik<<":(x,y)="<<"("<<result.xval()<<","<<result.yval()<<")"<<endl;
        cout<<result<<endl;
        result.polar_mode();
        cout<<"czyli\n"<<result<<endl;
        plik<<"czyli\n";
        plik<<":(m,a)="<<"("<<result.magval()<<","<<result.angval()<<")"<<endl;
        cout<<"srednia dlugosc kroku pozornego= "
        <<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"podaj dystans do przejscia (k aby zakonczyc):";

    }
      cin.clear();
        while(cin.get()!='\n')
            continue;
            plik.close();
    return 0;
}
    void Vector::set_mag()
    {
        mag=sqrt(x*x+y*y);
    }

    void Vector::set_ang()
    {
        if(x==0.0&&y==0.0)
        {
            ang=0.0;
        }
        else
            ang=atan2(y,x);

    }

    void Vector::set_x()
    {
        x=mag*cos(ang);

    }

    void Vector::set_y()
    {
        y=mag*sin(ang);

    }

    Vector::Vector()
    {
        x=y=mag=ang=0.0;
    }

    Vector::Vector(double n1,double n2,Mode form)
    {
        mode=form;
        if(form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if(form==POL)
        {
            mag=n1;
            ang=n2;
            set_x();
            set_y();

        }
        else
        {
              cout<<"niepoprawna wartosc trzeciego argumentu Vector()--";
        cout<<"zeruje vector\n";
        x=y=mag=ang=0.0;
        }


    }

    void Vector::reset(double n1,double n2,Mode form)
    {
        mode=form;
        if(form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if(form==POL)
        {
            mag=n1;
            ang=n2;
            set_x();
            set_y();

        }
        else
        {
               cout<<"niepoprawna wartosc trzeciego argumentu Vector()--";
        cout<<"zeruje vector\n";
        x=y=mag=ang=0.0;
        }



    }

    Vector::~Vector()
    {


    }

    void Vector::polar_mode()
    {
      mode=POL;

    }

    void Vector::rect_mode()
    {
        mode=RECT;

    }

    Vector Vector::operator+(const Vector &b)const
    {
        return Vector(x+b.x,y+b.y);

    }

    Vector Vector::operator-(const Vector &b)const
    {
          return Vector(x-b.x,y-b.y);

    }

    Vector Vector::operator-()const
    {
        return Vector(-x,-y);

    }

    Vector Vector::operator*(double val)const
    {
        return Vector(x*val,y*val);

    }

      Vector operator*(double val,const Vector &b)
     {
         return val*b;

     }

     ostream & operator<<(ostream & os,const Vector &b)
     {

         if(b.mode==Vector::RECT)
            os<<"(x,y)=("<<b.x<<", "<<b.y<<" )"<<endl;
         else if(b.mode==Vector::POL)
          os<<"(m,a)=("<<b.mag<<", "<<b.ang<<" )"<<endl;
         else
            os<<"niepoprawny tryb reprezentacji obiektu vectora"<<endl;
          return os;
     }


