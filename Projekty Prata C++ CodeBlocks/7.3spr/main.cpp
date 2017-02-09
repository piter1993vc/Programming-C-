#include <iostream>

using namespace std;
const int sizer=10;
void test(int *,int, int);
void show(const int *tab,int ile);
int main()
{
int tabik[sizer]{};
    test(tabik,sizer,102);
    show(tabik,sizer);
    cout << "Hello world!" << endl;
    return 0;
}
void test(int *tab,int ile, int val)
{

    for(int i=0;i<ile;i++)
    {

        tab[i]=val;
    }
}
void show(const int *tab,int ile)
{

        for(int i=0;i<ile;i++)
    {

        cout<<tab[i]<<endl;
    }
}
