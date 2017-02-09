#include <iostream>
#include "header.h"
#include <cctype>

using namespace std;

int main()
{
Person p1{"janusz",12};
p1.showgolf();
p1.setgolf("ala",14);
p1.showgolf();
Person p2=p1.setgolf("konik",15);
p2.showgolf();


    return 0;
}
