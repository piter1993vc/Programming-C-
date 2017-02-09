#include <iostream>

using namespace std;

int main()
{
    int auks,bats,coots;
    auks=19.99+11.99;
    bats=(int)19.99+(int)11.99;
    coots=int(19.99)+int(11.99);
    cout<<"auks = :"<<auks<< "bats = "<<bats<<endl;
    cout<<"coots "<<coots<<endl;
    char ch='Z';
    cout<<"kod odpowiadajacy znakowi ch to "<<int(ch)<<endl;
    cout<<"tak ten kod to "<<static_cast<int>(ch)<<endl;


    return 0;
}
