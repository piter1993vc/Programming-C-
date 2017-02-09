#include <iostream>

using namespace std;

int main()
{
    cout<<"podaj liczby";
    int sum=0;
    int input;
    while(cin>>input)
    {

        sum+=input;
    }
    cout<<"ostatnia liczba to "<<input<<" a liczba cyfr to: "<<sum<<endl;

    return 0;
}
