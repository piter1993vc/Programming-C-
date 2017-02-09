#include <iostream>

using namespace std;
template <typename T>
T max5(T a[]);
int main()
{
    int tab1[5]{1,2,3,4,5};
    double tab2[5]{1.0,2.0,3.0,4.0,5.6};
    cout << max5(tab1) << endl;
    cout << max5(tab2) << endl;
    return 0;
}
template <typename T>
T max5(T a[])
{
    T x=a[0];
for(int i=0;i<5;i++)
{

    x=(a[i]>x)?a[i]:x;

}

    return x;


}
