#include <iostream>

using namespace std;
const int sizer=5;

double show(const double *tab,int ile);
int main()
{
double tabik[sizer]{12.3,42.4,23.33,5.4,33.52};
double val;
    val=show(tabik,sizer);
cout<<endl<<endl;
    cout <<val << endl;
    //raw chain:
    cout<<R"+*("araaaa"\n"araaaa","aaaa")+*"<<endl;
    return 0;
}

double show(const double *tab,int ile)
{
double maxim;
maxim=tab[0];
        for(int i=0;i<ile;i++)
    {
(tab[i]>maxim)?maxim=tab[i]:maxim=maxim;
        cout<<tab[i]<<endl;
    }
    return maxim;
}
