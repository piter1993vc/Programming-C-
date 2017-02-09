#include <iostream>

using namespace std;
const int arsize=16;
int main()
{
    long long factorials[arsize];
    factorials[1]=factorials[0]=1LL;
    for(int i=2;i<arsize;i++)
        factorials[i]=i*factorials[i-1];
    for(int i=0;i<arsize;i++)
    {

        cout<<i<<"!="<<factorials[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
