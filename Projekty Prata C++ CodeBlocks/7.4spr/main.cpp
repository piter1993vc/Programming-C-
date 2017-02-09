#include <iostream>

using namespace std;
const int sizer=10;
void seting(int *tab1,int *tab2,int val);
void show(const int *tab1,const int *tab2);
int main()
{
int tabik[sizer]{};
    seting(tabik,tabik+sizer,102);
    show(tabik,tabik+sizer);

    return 0;
}
void seting( int *tab1, int *tab2,int val)
{
int *wsk;
    for(wsk=tab1;wsk<tab2;wsk++)
    {

        *wsk=val;
    }
}
void show(const int *tab1,const int *tab2)
{

 const int *wsk;
    for(wsk=tab1;wsk<tab2;wsk++)
    {

        cout<<*wsk<<endl;
    }
}
