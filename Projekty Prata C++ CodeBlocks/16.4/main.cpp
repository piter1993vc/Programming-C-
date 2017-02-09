#include <iostream>
#include <string>

using namespace std;

int main()
{
    string empt;
    string small="bit";
    string larger="slon najlepszy przyjaciel kobiet";
    cout<<"\tempty: "<<empt.size()<<endl;
    cout<<"\tsmall: "<<small.size()<<endl;
    cout<<"\tlarger: "<<larger.size()<<endl;

    cout << "pojemnosc" << endl;
        cout<<"\tempty: "<<empt.capacity()<<endl;
    cout<<"\tsmall: "<<small.capacity()<<endl;
    cout<<"\tlarger: "<<larger.capacity()<<endl;
empt.reserve(50);
 cout<<"\tempty: "<<empt.capacity()<<endl;
    cout<<"\tlarger: "<<larger.c_str()<<endl;
    return 0;
}
