#include <iostream>

using namespace std;
double masa(double gestosc,double objetosc=1);
template <typename T>
T srednia(const T &a,const  T &b)
{
   return (a+b)/2;


}
auto srednia(const int a,const int b)->double
{
  return (double(a)+double(b))/2;

}
template <typename T>

int main()
{
   // cout<<masa(1,2);
    //cout << srednia(2.2,4.3)<< endl;

    return 0;
}
double masa(double gestosc,double objetosc)
{

    return gestosc/objetosc;
}
