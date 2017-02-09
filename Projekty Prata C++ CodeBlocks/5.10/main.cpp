#include <iostream>

using namespace std;

int main()
{
    int quiz[7]{20,20,20,20,20,5,7};
    cout<<"bezblednie :"<<endl;
    int i;
    for(i=0;quiz[i]==20;i++)
    {
        cout<<i<<" "<<quiz[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
