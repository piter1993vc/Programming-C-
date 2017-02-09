#include <iostream>
#include <cfloat>

using namespace std;
bool hmean(double a,double b,double *ans);
int main()
{

    int x,y;
    double z;
    cout<<"podaj 2 liczby "<<endl;
    while(cin>>x>>y)
    {
        if(hmean(x,y,&z))
        {
           cout<<"srednia harmoniczna liczb "<<x<<" i "<<y<<" to "<<z<<endl;
        }
        else
            cout<<"suma liczb nie moze wynosic 0 popraw sie!";

    }
    cout << "Hello world!" << endl;
    return 0;
}
bool hmean(double a,double b,double *ans)
{

    if(a==-b)
    {
        *ans=DBL_MAX;
        return false;
    }
    else
    {
          *ans=2.0*a*b/(a+b);
    return true;
    }

}
