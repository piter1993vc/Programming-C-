#include <iostream>
#include <cmath>

using namespace std;
namespace COMPLEX{

class Complex{
private:
    double real;
    double imag;
public:
    Complex();
    Complex(double a,double b);
    Complex(const Complex &a);
    ~Complex();
    Complex operator+(const Complex &a)const;
    Complex operator-(const Complex &a)const;
    Complex operator*(const Complex &a)const;
    Complex operator*(const double a)const;
    Complex operator/(const double a)const;
    const Complex operator~()const{ return Complex(real,-imag);}

    friend Complex operator*(double a,const Complex &b);
    friend bool operator<(const Complex &a,const Complex &b);
    friend bool operator<=(const Complex &a,const Complex &b);
    friend bool operator>(const Complex &a,const Complex &b);
    friend bool operator>=(const Complex &a,const Complex &b);
    friend bool operator!=(const Complex &a,const Complex &b);
    friend bool operator==(const Complex &a,const Complex &b);
    friend ostream & operator<<(ostream & os,const Complex &a);
    friend istream & operator>>(istream & is,Complex &a);
    double real_val()const{return real;}
    double imag_val()const{return imag;}

};



}

int main()
{
    using namespace COMPLEX;
    Complex a(3.0,4.0);
    Complex c;
    cout<<"Podaj liczbe zespolona (k. aby zakonczyc):\n";
    while(cin>>c)
    {
cout<<"c to "<<c<<'\n';
cout<<"sprzezona z c to "<<~c<<endl;
cout<<"a to "<<a<<endl;
cout<<"a +c wynosi "<<a+c<<endl;
cout<<"a -c wynosi "<<a-c<<endl;
cout<<"a *c wynosi "<<a*c<<endl;
cout<<"2*c wynosi "<<2*c<<endl;

cout<<"Podaj liczbe zespolona (k. aby zakonczyc):\n";



    }

    cout << "gotowe!" << endl;
    return 0;
}





namespace COMPLEX{




    Complex::Complex()
    {

        real=imag=0;
    }
    Complex::Complex(double a,double b)
    {
        real=a;
        imag=b;
    }
    Complex::Complex(const Complex &a)
    {
        real=a.real;
        imag=a.imag;
    }
    Complex::~Complex()
    {
        //nic tu nie ma
    }
    Complex Complex::operator+(const Complex &a)const
    {
        return Complex(real+a.real,imag+a.imag);
    }
    Complex Complex::operator-(const Complex &a)const
    {
        return Complex(real-a.real,imag-a.imag);
    }



    Complex Complex::operator*(const Complex &a)const
    {
          return Complex(real*a.real-imag*a.imag,real*a.imag+imag*a.real);
    }
    Complex Complex::operator*(const double a)const
    {

        return Complex(real*a,imag*a);
    }



    Complex operator*(double a,const Complex &b)
    {
        return Complex(a*b.real,a*b.imag);
    }
    Complex Complex::operator/(const double a)const
    {
        return Complex(real/a,imag/a);
    }


    bool operator<(const Complex &a,const Complex &b)
    {
        double abs_a=(a.real*a.real+a.imag*a.imag);
        double abs_b=(b.real*b.real+b.imag*b.imag);
        return (abs_a<abs_b);

    }
     bool operator<=(const Complex &a,const Complex &b)
    {
        double abs_a=(a.real*a.real+a.imag*a.imag);
        double abs_b=(b.real*b.real+b.imag*b.imag);
        return (abs_a<=abs_b);

    }
     bool operator>(const Complex &a,const Complex &b)
    {
        double abs_a=(a.real*a.real+a.imag*a.imag);
        double abs_b=(b.real*b.real+b.imag*b.imag);
        return (abs_a>abs_b);

    }
     bool operator>=(const Complex &a,const Complex &b)
    {
        double abs_a=(a.real*a.real+a.imag*a.imag);
        double abs_b=(b.real*b.real+b.imag*b.imag);
        return (abs_a>=abs_b);
    }
     bool operator!=(const Complex &a,const Complex &b)
    {
        return (a.real!=b.real||a.imag!=b.imag);
    }
     bool operator==(const Complex &a,const Complex &b)
    {
        return (a.real==b.real&&a.imag==b.imag);

    }
    ostream & operator<<(ostream & os,const Complex &a)
    {
        os<<"("<<a.real<<", "<<a.imag<<"i)"<<endl;
        return os;
    }
    istream & operator>>(istream & is, Complex &a)
    {
        cout<<"skladowa rzeczywiosta: ";
        is>>a.real;
        cout<<"skladowa urojona: ";\
        is>>a.imag;
        return is;
    }


}

