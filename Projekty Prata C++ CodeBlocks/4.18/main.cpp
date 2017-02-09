#include <iostream>

using namespace std;

int main()
{
    double *p=new double[3];
    p[0]=2.3;
    p[1]=4.2;
    p[2]=5.7;
    cout<<"p[1] to "<<p[1]<<endl;
    p=p+1;
    cout<<"teraz p[0] to "<<p[0]<<endl;
    cout<<"p[1] to "<<p[1]<<endl;
    p=p-1;
     cout<<"teraz p[0] to "<<p[0]<<endl;
    delete [] p;

    cout << "Hello world!" << endl;
    return 0;
}
