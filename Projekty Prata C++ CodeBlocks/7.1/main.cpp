#include <iostream>

using namespace std;
void simple();
int main()
{
    double prices[3]{2.3,3.2,4.2};
    //petla zakresowa
    for(double &b: prices)
    {
b=b*2;
        cout<<b<<endl;
    }
    cout << "funkcja main() wywoluje funkcje simple():" << endl;
    simple();
     cout << "funkcja main() po wywolaniu  funkcji simple():" << endl;
    return 0;
}
void simple()
{
cout<<"jestem sobie taką prosciutką funkcją\n";

}
