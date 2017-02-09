#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"podaj pierwsza liczbe calkowita";
    cin>>a;
     cout<<"podaj druga liczbe calkowita";
    cin>>b;
    int sum=0;
    for(int i=a;i<=b;i++)
    {
       sum+=i;

    }

    cout << sum<< endl;
    return 0;
}
