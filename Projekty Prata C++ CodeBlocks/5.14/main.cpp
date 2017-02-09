#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout<<"podaj czas opoznienia w sekundach:";
    int time;
    cin>>time;
    time_t sek=1*CLOCKS_PER_SEC;
    time_t border=time*CLOCKS_PER_SEC;
    time_t start=clock();
    while(clock()-start<border)
    {

    }
    cout << "Hello world!" << endl;
    return 0;
}
