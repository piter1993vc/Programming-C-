#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"dzielenie calkowitoliczbowe 9/5= "<<9/5<<endl;
    cout<<"dzielenie zmiennoprzecinkowe 9.0/5.0= "<<9.0/5.0<<endl;
    cout<<"dzielenie mieszane: 9.0/5= "<<9.0/5<<endl;
    cout<<"stale typu double 1.e7/9.0="<<1.e7/9.0<<endl;

       cout<<"stale typu float 1.e7f/9.0f="<<1.e7f/9.0f<<endl;


    return 0;
}
