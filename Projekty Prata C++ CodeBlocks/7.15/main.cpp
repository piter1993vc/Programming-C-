#include <iostream>
#include <array>
#include <string>
using namespace std;
const int season=4;
const array<string, season> sezony{"wiosna","lato","jesien","zima"};

void filler(array<double,season> *pa);
void show(const array<double,season> pa);
int main()
{
    char tab[2][2]{{'a','b'},{'c','d'}};
    cout<<(*tab)[0];
    array<double,season> expenses;
    filler(&expenses);
    show(expenses);
    return 0;
}
void filler(array<double,season> *pa)
{
    for(int i=0;i<season;i++)
{
    cout<<"podaj hajsy nr "<<i+1<<" ";
    cin>>(*pa)[i];


}
}





void show(const array<double,season> pa)
{

double total=0.0;
    cout<<"\nWYDATKI\n";
    for(int i=0;i<season;i++)
    {
        cout<<sezony[i]<<" "<<pa[i]<<" zl "<<endl;
        total+=pa[i];


    }
    cout<<"lacznie wydatki to : "<<total<<" zl "<<endl;
}

