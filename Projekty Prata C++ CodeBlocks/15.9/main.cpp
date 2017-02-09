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
        try
        {

        z=hmean(x,y);
        }
        catch(const char *s)
        {
            cout<<s<<endl;
            cout<<"podaj kolejna pare liczb"<<endl;
            continue;
        }
        cout<<"srednia harmoniczna liczb "<<x<<" i "<<y<<" to "<<z<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
double hmean(double a,double b)
{
    if(a==-b)
    {
     throw "niepoprawne argumenty funkcji hmean(): a=-b jest niedozwolone!";
    }
    return 2.0*a*b/(a+b);


}
