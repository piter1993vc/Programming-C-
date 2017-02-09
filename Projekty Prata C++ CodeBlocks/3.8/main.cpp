#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub=10.0/3.0;
    double mint=10.0/3.0;
    const float million=1.06e6;

    cout<<endl;
    cout<<"tub="<<tub;
    cout<<"a milion razy tub="<<tub*million;
    cout<<"\na 10 milionow razy tub=";
    cout<<10*million*tub<<endl;

    cout<<"mint="<<mint<<"a milion razy mint="<<million*mint<<endl;
    cout << "Hello world!" << endl;
    cout<<1.23f<<"  "<<2.2L;
    return 0;
}
