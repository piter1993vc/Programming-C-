#include <iostream>
const int rozmiar=8;
using namespace std;
int fill_array(double *tab,int n);
void show_array(double *tab,int n);
void revalue_array(double r,double *tab,int n);
int main()
{
    double tabliczka[rozmiar];
    int sizer=fill_array(tabliczka,rozmiar);
    show_array(tabliczka,sizer);
    if(sizer>0)
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
        revalue_array(value,tabliczka,sizer);
        show_array(tabliczka,sizer);
    }
    cout << "happy end!" << endl;
    return 0;
}
int fill_array(double *tab,int n)
{
   double temp;
   int i;
   for(i=0;i<n;i++)
   {
       cout<<"podaj wartosc nieruchomosci nr "<<i+1<<" : ";
       if(!(cin>>temp))
       {

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
        tab[i]=temp;

   }
   return i;

}

void show_array(double *tab,int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<"nieruchomosc nr "<<i+1<<" : ";
        cout<<tab[i]<<endl;
    }

}
void revalue_array(double r,double *tab,int n)
{

    for (int i=0;i<n;i++)
    {

        tab[i]*=r;
    }
}
