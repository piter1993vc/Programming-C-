#include <iostream>

using namespace std;

int main()
{
    cout<<"podaj adres:";
    char adres[80];
    cin.getline(adres,80);
    cout << adres << endl;
    return 0;
}
