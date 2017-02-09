#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<float,3> a;
    float suma=0;
    for(int i=0;i<3;i++)
    {
            cout << "podaj "<<i+1<<" wynik sprintu na 100m w sekundach:" << endl;
            cin>>a[i];
        suma+=a[i];
    }
    float srednia=suma/3;
    cout<<"srednia w sekundach to: "<<srednia<<endl<<"wyniki: "<<endl;
     for(int i=0;i<3;i++)
     {
       cout<<a[i] <<" [s/100m]"<<endl;
     }

    return 0;
}
