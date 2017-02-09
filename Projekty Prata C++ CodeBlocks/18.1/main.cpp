#include <iostream>

using namespace std;
inline double f(double tf){return 5.0*(tf-32.0)/9.0;}
int main()
{
    double tc=21.5;
    double && rd1=7.07;
    double && rd2=1.8*tc+32.0;
    double && rd3=f(rd2);
    cout<<"wartosc i adres tc : "<<tc<<" "<<&tc<<endl;
    cout<<"wartosc i adres rd1 : "<<rd1<<" "<<&rd1<<endl;
    cout<<"wartosc i adres rd2 : "<<rd2<<" "<<&rd2<<endl;
    cout<<"wartosc i adres rd3 : "<<rd3<<" "<<&rd3<<endl;

    return 0;
}
