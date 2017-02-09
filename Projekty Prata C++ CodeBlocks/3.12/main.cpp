#include <iostream>

using namespace std;

int main()
{
    const int Lbs_per_stn=14;
    int lbs;
    cout<<"podajswoja wage w funtach:"<<endl;
    cin>>lbs;
    int stone=lbs/Lbs_per_stn;
    int pounds=lbs%Lbs_per_stn;
    cout<<lbs<<"funtow to"<<stone<<"kamieni"<<pounds<<"funtow\n.";
    cout << "Hello world!" << endl;
    return 0;
}
