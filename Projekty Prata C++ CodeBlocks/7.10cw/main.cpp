#include <iostream>

using namespace std;
double add(double x,double y);
double sub(double x,double y);
double mul(double x,double y);
double div(double x,double y);
double calculate(double a,double b,double (*wsk)(double,double));
int main()
{
    double (*ptr[4])(double,double)={add,sub,mul,div};
    double licz_1,licz_2;
    double suma;
    double roznica;
    double mnozenie;
    double dzielenie=0.0;
    auto p=ptr;
      cout<<"podaj 2 liczby zmiennoprzecinkowe "<<endl;
      cin>>licz_1>>licz_2;
      if(licz_2!=0.0)
      {
        dzielenie=calculate(licz_1,licz_2,*ptr[3]);
      }
     suma=calculate(licz_1,licz_2,*p);
     roznica=calculate(licz_1,licz_2,ptr[1]);
     mnozenie=calculate(licz_1,licz_2,*ptr[0]);

    cout << "suma= " <<suma<<endl;
    cout << "roznica= " <<roznica<<endl;
    cout << "mnozenie= " <<mnozenie<<endl;
    if(licz_2!=0.0)
    cout << "dzielenie= " <<dzielenie<<endl;
    return 0;
}
double add(double x,double y)
{
    return x+y;

}
double sub(double x,double y)
{

     return x-y;
}

double mul(double x,double y)
{
     return x*y;

}

double div(double x,double y)
{
     return x/y;

}


double calculate(double a,double b,double (*wsk)(double,double))
{
    double val;
    val=wsk(a,b);
    return val;

}
