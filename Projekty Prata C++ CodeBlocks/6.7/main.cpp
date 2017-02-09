#include <iostream>
#include <climits>

using namespace std;
bool if_good(double x);
int main()
{
    cout<<"rzuc no synek liczba:";
    double num;
    cin>>num;
    while(!if_good(num))
    {

        cout<<"nie miesci sie w zakresie proboj dalej: ";
        cin>>num;
    }
int val=int(num);
    cout << "miesci sie synek liczba" <<val<< endl;
    return 0;
}
bool if_good(double x)
{
    if(x<=INT_MAX&&x>=INT_MIN)
        return true;
    else
        return false;

}
