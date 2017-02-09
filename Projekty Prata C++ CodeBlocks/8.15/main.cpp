#include <iostream>

using namespace std;
template<class T>
T lesser(T a,T b)
{
    return (a<b)?a:b;



}

auto lesser(int a,int b)->int
{

    return (a<b)?a:b;
}
int main()
{
    int k;
    decltype(k) j=12;
    int a=12;int b=13;
    double c=32.1; double d=42.3;
    cout<<lesser(a,b)<<endl;
    cout<<lesser(c,d)<<endl;
    cout<<lesser<>(a,b)<<endl;
    cout<<lesser<int>(c,d)<<endl;
    cout<<j<<endl;
    double xx=12.2;
    decltype((xx)) u=xx;
    cout<<u<<endl;
    cout<<&xx<<" "<<&u<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
