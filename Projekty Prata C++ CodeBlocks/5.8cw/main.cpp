#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char slowo[20];
    cout<<"podaj slowa (kiedy skonczysz napisz \"gotowe\"\n";
    cin.getline(slowo,20);
    int licz=0;
    while(strcmp(slowo,"gotowe")!=0)
    {
        cin.getline(slowo,20);
        licz++;

    }
    cout<<"podano "<<licz<<" slow"<<endl;

    return 0;
}
