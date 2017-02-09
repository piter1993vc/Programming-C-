#include <iostream>

using namespace std;
double cube(double a);
double reccube(double &a);
int main()
{
    double x=3.0;
    cout<<cube(x);
    cout<<" = szescian "<<x<<endl;
    cout<<reccube(x);
       cout<<" = szescian "<<x<<endl;
    return 0;
}
double cube(double a)
{
    a*=a*a;
    return a;

}
double reccube(double &a)
{
     a*=a*a;
    return a;

}
