#include <iostream>

using namespace std;
const int siz=10;
int main()
{
    double tab[siz];
    cout<<"podaj 10 wartosci:";
    int i=0;
    cout<<"Podaj wartosc nr 1:";
    double sum=0.0;
    while(i<siz&&cin>>tab[i])
    {
        sum+=tab[i];
        ++i;
        cout<<"podaj wartosc nr "<<i+1<<":"<<endl;
    }
    double srednia=sum/i;
    cout<<"srednia: "<<srednia<<endl;
    cout << "wieksze od sredniej " << endl;
    for(int j=0;j<i;j++)
        if(tab[j]>srednia)
            cout<<tab[j]<<endl;
    return 0;
}
