#include <iostream>

using namespace std;
extern int tom;
static int dick=10;
int harry=200;

void remote_access()
{
    cout<<"funkcja remote_access() zwraca nastepujace adresy: "<<endl;
    cout<<"&tom= "<<&tom<<endl;
    cout<<"&dick= "<<&dick<<endl;
    cout<<"&harry= "<<&harry<<endl;

}
