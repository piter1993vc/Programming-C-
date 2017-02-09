#include <iostream>

using namespace std;

int main()
{
    int rats=101;
    int &rodens=rats;
    cout<<"rats= "<<rats<<endl;
    cout<<"rodens= "<<rodens<<endl;
    rodens++;
            cout<<"rats= "<<rats<<endl;
    cout<<"rodens= "<<rodens<<endl;

             cout<<"adres rats= "<<&rats<<endl;
    cout<<"adres rodens= "<<&rodens<<endl;

    return 0;
}
