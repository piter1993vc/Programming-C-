#include <iostream>

using namespace std;

int main()
{
    const float km_to_mil=0.6214;
    const float galon_to_litr=3.875;
    cout<<"podaj zuzycie paliwa w litrach na 100 km"<<endl;
double zuzycie;
cin>>zuzycie;

double galony=zuzycie/galon_to_litr;
double mile=62.14;
double x_mil=mile*1/galony;

cout<<"zuzywasz "<<x_mil<<" mil na galon"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
