#include <iostream>

#include <vector>
using namespace std;

int main()
{
    cout<<"podaj dodatnioa liczbe cakowita";
    int liczba;
    cin>>liczba;
    while(liczba<1)
    {

        cout<<"popraw sie prosze";
        cin>>liczba;

    }
    vector<int> wsk(liczba);
wsk[0]=12;

    cout <<wsk[0] << endl;

    return 0;
}
