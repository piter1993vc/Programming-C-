#include <iostream>
#include "header.h"
using namespace std;


int main()
{
    golf pilkarz;
    golf pilkarz2;
    setgolf(pilkarz,"bonzo",3);
    setgolf(pilkarz2);
    showgolf(pilkarz);
    showgolf(pilkarz2);

    cout << "Hello world!" << endl;
    return 0;
}
