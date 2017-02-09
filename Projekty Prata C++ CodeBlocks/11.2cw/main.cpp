#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>


using namespace std;
 const double rad_to_deg=57.29;
class Vector{
public :

    enum Mode{RECT,POL};

private:
    double x;
    double y;
    Mode mode;

public:
    Vector();
    Vector(double n1,double n2,Mode form=RECT);
    void reset(double n1,double n2,Mode form=RECT);
    ~Vector();
    double xval()const {return x;}
    double yval()const {return y;}
    double magval()const {return sqrt(x*x+y*y);}
    double angval()const { return rad_to_deg*atan2(x,y);}
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
        while(result.magval()<target)
        {


            direction=rand()%360;
            step.reset(dsteps,direction,Vector::POL);
            result=result+step;
            steps++;

        }
        cout<<"po "<<steps<<" krokach delikwent osiagnal polozenie:\n";
        cout<<result<<endl;
        result.polar_mode();
        cout<<"czyli\n"<<result<<endl;
        cout<<"srednia dlugosc kroku pozornego= "
        <<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"podaj dystans do przejscia (k aby zakonczyc):";

    }
      cin.clear();
        while(cin.get()!='\n')
            continue;

    return 0;
}








    Vector::Vector()
    {
        x=y=0.0;

    }

    Vector::Vector(double n1,double n2,Mode form)
    {

        mode=form;
        if(form==RECT)
        {
            x=n1;
            y=n2;

        }
        else if(form==POL)
        {
x=n1*cos(n2);
y=n1*sin(n2);

        }
        else
        {
              cout<<"niepoprawna wartosc trzeciego argumentu Vector()--";
        cout<<"zeruje vector\n";
        x=y=0.0;
        }


    }

    void Vector::reset(double n1,double n2,Mode form)
    {
        mode=form;
        if(form==RECT)
        {
            x=n1;
            y=n2;

        }
        else if(form==POL)
        {

x=n1*cos(n2);
y=n1*sin(n2);
        }
        else
        {
               cout<<"niepoprawna wartosc trzeciego argumentu Vector()--";
        cout<<"zeruje vector\n";
        x=y=0.0;
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
    double modul=sqrt(b.x*b.x+b.y*b.y);
    double kat=rad_to_deg*atan2(b.y,b.x);
         if(b.mode==Vector::RECT)
            os<<"(x,y)=("<<b.x<<", "<<b.y<<" )"<<endl;
         else if(b.mode==Vector::POL)
    os<<"(m,a)=("<<modul<<", "<<kat<<" )"<<endl;

         else
            os<<"niepoprawny tryb reprezentacji obiektu vectora"<<endl;
          return os;
     }


