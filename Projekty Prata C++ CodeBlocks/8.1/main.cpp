#include <iostream>

using namespace std;
inline double square(double x) { return x*x;}
int main()
{
    double a,b;

    double c=13.0;
    a=square(5.0);
    b=square(4.5+7.5);
    cout<<"a= "<<a<<",b= "<<b<<"\n";
    cout<<" c= "<<c<<endl;
    cout<<"kwadrat c to "<<square(c++)<<"\n";
    cout<<"teraz c= "<<c<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
