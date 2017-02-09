#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<float,13> ideas;
    ideas.at(1)=13.2;
    cout<<ideas[1]<<endl;

    return 0;
}
