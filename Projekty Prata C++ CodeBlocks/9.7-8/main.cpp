#include <iostream>

using namespace std;
int tom=3;
int dick=30;
static int harry=300;
extern void remote_access();
int main()
{
    cout<<"funkcja main() zwraca nastepujace adresy: "<<endl;
    cout<<"&tom= "<<&tom<<endl;
    cout<<"&dick= "<<&dick<<endl;
    cout<<"&harry= "<<&harry<<endl;
    remote_access();

    cout << "Hello world!" << endl;
    return 0;
}
