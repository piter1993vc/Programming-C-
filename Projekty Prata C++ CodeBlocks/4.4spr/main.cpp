#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,5> liczby;
    liczby.at(0)=0;
    liczby.at(1)=2;
    liczby.at(2)=3;
    liczby.at(3)=6;
    liczby.at(4)=8;

int sum=liczby[0]+liczby[4];

    cout << sum << endl;
    return 0;
}
