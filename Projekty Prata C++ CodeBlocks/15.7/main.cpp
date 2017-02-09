#include <iostream>
#include <cstdlib>

using namespace std;
double hmean(double a,double b);
int main()
{

    double x,y,z;
    std::cout<<"podaj 2 liczby"<<endl;
    while(cin>>x>>y)
    {
        z=hmean(x,y);
        cout<<"srednia harmoniczna liczb "<<x<<" i "<<y<<" to "<<z<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
double hmean(double a,double b)
{
    if(a==-b)
    {
      cout<<"niepoprawne argumenty funkcji hmean()"<<endl;
        abort();
    }
    return 2.0*a*b/(a+b);


}
