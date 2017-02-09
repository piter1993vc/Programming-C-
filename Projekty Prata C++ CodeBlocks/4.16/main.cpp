#include <iostream>

using namespace std;

int main()
{
    int higgens=5;
    int *pt=&higgens;
    cout<<"wartossc zmiennej higgens "<<higgens<<"adres zmiennej higgens "<<&higgens<<endl;

        cout<<"wartossc *pt "<<*pt<<"adres pt "<<pt<<endl;

    return 0;
}
