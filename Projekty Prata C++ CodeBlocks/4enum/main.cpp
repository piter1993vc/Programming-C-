#include <iostream>

using namespace std;

int main()
{
    enum spread{lejce,koty,falusy};

    spread kolorki=spread(3);
    cout<<kolorki;
    cout << "Hello world!" << endl;
    return 0;
}
