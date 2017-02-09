
#include <iostream>
#include <cstring>
#include <string>


#include "header.h"
using namespace std;

namespace SALES{



Sales::Sales(const double arr[],int n)
{
    for(int i=0;i<n;i++)
    {

        sales[i]=arr[i];


    }


}


void Sales::SetSales()
{
    double suma=0.0;
    double minimum;
    double maximum;
    int i;
    for( i=0;i<4;i++)
    {

       cout<<"podaj liczbe nr "<<i+1<<" : ";
       cin>>sales[i] ;
        suma+=sales[i];
        if(i==0)
        {
            minimum=sales[i];
            maximum=sales[i];

        }
        maximum=(sales[i]>maximum)?sales[i]:maximum;
        minimum=(sales[i]<minimum)?sales[i]:minimum;


    }
    cout<<endl;
    average=suma/double(i);

maxim=maximum;
minim=minimum;


}

void Sales::ShowSales()const
{
    cout<<"srednia: "<<average<<endl;
    cout<<"maximim: "<<maxim<<endl;
    cout<<"minimum: "<<minim<<endl;




}
void Sales::licz()
{
    double suma=0.0;
    double minimum;
    double maximum;
    int i;
    for( i=0;i<4;i++)
    {

        suma+=sales[i];
        if(i==0)
        {
            minimum=sales[i];
            maximum=sales[i];

        }
        maximum=(sales[i]>maximum)?sales[i]:maximum;
        minimum=(sales[i]<minimum)?sales[i]:minimum;


    }

    average=suma/double(i);

maxim=maximum;
minim=minimum;


}






}

