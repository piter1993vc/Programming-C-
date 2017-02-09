#include <iostream>

using namespace std;
void countdown(int n);
int main()
{
    countdown(10);
    cout << "Hello world!" << endl;
    return 0;
}
void countdown(int n)
{
    cout<<"odliczanie..."<<n<<" (n spod adresu "<<&n<<" )"<<endl;
    if(n>0)

    countdown(n-1);
    cout<<n<<" (n spod adresu "<<&n<<" )"<<" Ba-bach!"<<endl;

}
