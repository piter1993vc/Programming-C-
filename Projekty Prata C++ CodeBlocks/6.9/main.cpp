#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"podaj dwie liczby calkowite:";
    cin>>a>>b;
    cout<<"wieksza z liczb "<<a<<"i"<<b<<endl;
    int c=a>b?a:b;
    cout<<" to "<<c<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
