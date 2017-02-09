#include <iostream>
#include <functional>

using namespace std;
template<typename T,typename F>
T use_f(T v,F f)
{
    static int licz=0;
    licz++;
    cout<<" use_f licz= "<<licz<<", &licz= "<<&licz<<endl;
    return f(v);
}

class Fp
{
private:
    double z_;
public:
    Fp(double z=1.0):z_(z){}
    double operator()(double p){return z_*p;}
};
class Fq
{
private:
    double z_;
public:
    Fq(double z=1.0):z_(z){}
    double operator()(double q){return z_+q;}
};


double dub(double x){return 2.0*x;}
double square(double x){return x*x;}


int main()
{
    double y=1.21;
    function<double(double)>ef1=dub;
    function<double(double)>ef2=square;
    function<double(double)>ef3=Fp(10.0);
    function<double(double)>ef4=Fq(10.0);
    function<double(double)>ef5=[](double u){return u*u;};
    function<double(double)>ef6=[](double u){return u+u/2.0;};
    cout<<"wskaznik do funkcji dub:\n";
    cout<<" "<<use_f(y,ef1)<<endl;

    cout<<"wskaznik do funkcji square:\n";
    cout<<" "<<use_f(y,ef2)<<endl;

    cout<<"Obiekt funkcyjny Fp:\n";
    cout<<" "<<use_f(y,ef3)<<endl;

    cout<<"Obiekt funkcyjny Fq:\n";
    cout<<" "<<use_f(y,ef4)<<endl;

    cout<<"wyrazenie lambda 1:\n";
    cout<<" "<<use_f(y,ef5)<<endl;

     cout<<"wyrazenie lambda 2:\n";
    cout<<" "<<use_f(y,ef6)<<endl;

    return 0;
}
