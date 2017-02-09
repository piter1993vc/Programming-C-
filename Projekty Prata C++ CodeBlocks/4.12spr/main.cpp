#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    float treacle[10];
    for(int i=0;i<10;i++)
    {
        treacle[i]=rand()%1000+1;

    }
    float *wsk=treacle;

    cout << *wsk << " "<<*(wsk+9)<<endl;
    return 0;
}
