#include <iostream>

using namespace std;

int main()
{
    cout.fill('*');
    const char *staff[2]={"jan kowalski","joanna nowak"} ;
    long bonus[2]={900,1350} ;
    for(int i=0;i<2;i++)
    {

        cout<<staff[i]<<endl;
        cout.width(7);
        cout<<bonus[i]<<endl;
    }


      cout << "Hello world!" << endl;
    return 0;
}
