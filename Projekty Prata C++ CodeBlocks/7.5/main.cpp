#include <iostream>

using namespace std;
const int max_size=8;
int sum(int *tab,int ile);
int main()
{
    int tabliczka[max_size]{2,3,4,5,6,7,8,9};
    int ile;
   ile=sum(tabliczka,max_size);

    cout << "suma elementow wynosi " <<ile<< endl;
    return 0;
}
int sum(int *tab,int ile)
{

    int suma=0;
    for(int i=0;i<ile;i++)
    {

        suma+=tab[i];
    }
    return suma;
}
