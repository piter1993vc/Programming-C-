#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<long double,101> silnia;
    silnia[0]=silnia[1]=1.0;
for(int i=2;i<=100;i++)
{
    silnia[i]=i*silnia[i-1];
    cout<<i<<"!=: "<<silnia[i]<<endl;

}
    return 0;
}
