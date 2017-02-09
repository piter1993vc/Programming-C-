#include <iostream>
const int sizer=8;
using namespace std;
double * fill_array(double *tab1,double *tab2);
void show_array(double *tab1,double *tab2);
void revalue_array(double r,double *tab1,double *tab2);
int main()
{
    double tabliczka[sizer];
    double *wsk=fill_array(tabliczka,tabliczka+sizer);
    show_array(tabliczka,wsk);
    if(wsk!=NULL)
    {

        cout<<"podaj wartosc calkowitą to przewartosciowania nieruchomosci: ";
        double value;
        while(!(cin>>value)||value<0)
        {
            cin.clear();
               while(cin.get()!='\n')
                continue;

            cout<<"wprowadziles bledna dana popraw sie: ";


        }
        revalue_array(value,tabliczka,wsk);
        show_array(tabliczka,wsk);
    }
    cout << "happy end!" << endl;
    return 0;
}
double * fill_array(double *tab1,double *tab2)
{
   double temp;
   double *wsk;
   int i;
   for(i=0,wsk=tab1;wsk<tab2;wsk++,i++)
   {
       cout<<"podaj wartosc nieruchomosci nr "<<i+1<<" : ";
       if(!(cin>>temp))
       {
           if(i==0)
           {
               wsk=NULL;
           }

           cin.clear();
           cout<<"podales zla wartosc wstydz sie, koniec wpisywania danych!\n"<<endl;
           while(cin.get()!='\n')
            continue;
           break;
       }
       else if(temp<0)
       {
           cout<<"wprowadziles wartosc hajsu mniejsza od 0 ";
           break;

       }
       else
        *wsk=temp;

   }

   return wsk;

}

void show_array(double *tab1,double *tab2)
{
    double *wsk;
    int i;
     for(i=0,wsk=tab1;wsk<tab2;wsk++,i++)
    {

        cout<<"nieruchomosc nr "<<i+1<<" : ";
        cout<<*wsk<<endl;
    }

}
void revalue_array(double r,double *tab1,double *tab2)
{
 double *wsk;

     for(wsk=tab1;wsk<tab2;wsk++)
    {


        *wsk*=r;
    }
}
