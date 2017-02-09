#include <iostream>

using namespace std;

int main()
{
       int rats=101;
    int &rodens=rats;
    cout<<"rats= "<<rats<<endl;
    cout<<"rodens= "<<rodens<<endl;


             cout<<"adres rats= "<<&rats<<endl;
    cout<<"adres rodens= "<<&rodens<<endl;

    int bunnies=50;
    rodens=bunnies;
       cout<<"rats= "<<rats<<endl;
    cout<<"rodens= "<<rodens<<endl;
    cout<<"bunnies= "<<bunnies<<endl;


       cout<<"&rodens= "<<&rodens<<endl;
    cout<<"&bunnies= "<<&bunnies<<endl;


    return 0;
}
