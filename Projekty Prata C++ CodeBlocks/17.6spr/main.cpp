#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.setf(ios_base::showbase);
    cout<<"podaj liczbe calkowita ";

    int liczba;
    cin>>liczba;
    cout<<"liczba "<<setw(15)<<liczba<<" inaczej to "<<hex<<setw(15)<<liczba<<" "<<oct<<" "<<setw(15)<<liczba;

    return 0;
}
