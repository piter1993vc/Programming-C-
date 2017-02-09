
#include <iostream>
#include <cstring>
#include "header.h"
namespace SALES{
using namespace std;

void setsales(sales & s,const double ar[], int n)
{
    double srednia=0.0;
    double suma=0.0;
    double maxim=ar[0];
    double minim=ar[0];
 for(int i=0;i<ile;i++)
 {
     s.sale[i]=ar[i];
     suma+=ar[i];
     maxim=(ar[i]>maxim)?ar[i]:maxim;
     minim=(ar[i]<minim)?ar[i]:minim;


 }
 srednia=suma/n;
 s.average=srednia;
 s.maxim=maxim;
 s.minim=minim;


}


void setsales(sales & s)
{
    for(int i=0;i<4;i++)
    {

        cout<<"podawaj 4 liczby zmiennoprzecinkowe: ";
        cin>>s.sale[i];
    }
        double srednia=0.0;
    double suma=0.0;
    double maxim=s.sale[0];
    double minim=s.sale[0];
 for(int i=0;i<ile;i++)
 {

     suma+=s.sale[i];
     maxim=(s.sale[i]>maxim)?s.sale[i]:maxim;
     minim=(s.sale[i]<minim)?s.sale[i]:minim;


 }
 srednia=suma/4;
 s.average=srednia;
 s.maxim=maxim;
 s.minim=minim;


}

void showsales(const sales &s)
{
    cout<<"srednia: "<<s.average<<endl;
    cout<<"maximum: "<<s.maxim<<endl;
    cout<<"minim: "<<s.minim<<endl;

}




}


