#include <iostream>
#include <string>

using namespace std;

int main()
{
    string slowo;
    cout<<"podaj slowa kiedy skonczysz napisz \"gotowe\"\n";
    getline(cin,slowo);
    int licz=0;
    while(slowo!="gotowe")
    {
        getline(cin,slowo);
        licz++;

    }
    cout<<"podano "<<licz<<" slow"<<endl;

    return 0;
}
