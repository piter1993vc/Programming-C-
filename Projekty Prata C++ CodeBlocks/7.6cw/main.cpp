#include <iostream>

using namespace std;
const int sizer=10;
int fill_array(double *tab,int ile);
void show_array(double *tab,int ile);
void reverse_array(double *tab,int ile);
int main()
{
    double tab[sizer];
    int licznik=fill_array(tab,sizer);
    cout<<"wypelniona tablica: "<<endl;
    show_array(tab,licznik);
    cout<<" tablica odwrocona: "<<endl;
    reverse_array(tab,licznik);
    show_array(tab,licznik);

    cout << "Hello world!" << endl;










    return 0;
}














int fill_array(double *tab,int ile)
{
    int licz=0;
    for(int i=0;i<ile;i++)
    {

        cout<<"podaj liczbe zmiennoprzecinkowa nr "<<i+1<<": ";
        if(!(cin>>tab[i]))
        {
            cin.clear();
             break;
        }
        licz++;



    }

    return licz;


}

void show_array(double *tab,int ile)
{
    for(int i=0;i<ile;i++)
    {
        cout<<"element: "<<i+1<<" :"<<tab[i]<<endl;

    }

}

void reverse_array(double *tab,int ile)
{
    double temp;
    int i,j;
    for( i=0,j=ile-1;j>=i;i++,j--)
    {
        temp=tab[i];
        tab[i]=tab[j];
        tab[j]=temp;

    }

}
