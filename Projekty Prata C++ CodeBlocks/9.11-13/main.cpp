#include <iostream>
#include "header.h"

using namespace std;
void other();
void another();
int main()
{
    using debt::debts;
    using debt::showDebts;
    debts golf{{"karol","polan"},23.2};
    showDebts(golf);
   // other();
    another();
    cout << "Hello world!" << endl;
    return 0;
}
void other()
{
    using std::cout;
    using std::endl;
    using namespace debt;
    person dg{"daria","maria"};
    showPerson(dg);
    cout<<endl;
    debts zippy[3];
    int i;
    for(i=0;i<3;i++)
    {
        getDebts(zippy[i]);
    }
    for(int i=0;i<3;i++)
    {
        showDebts(zippy[i]);
    }
    cout<<"kwota laczna "<<sumDebts(zippy,3)<<" zl"<<endl;




}
void another()
{
using pers::person;
person collector{"zibbi","windykator"};
pers::showPerson(collector);
std::cout<<std::endl;

}
