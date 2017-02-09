#include <iostream>

using namespace std;
extern void update(double  dt);
extern void local();
double warming=0.3;
int main()
{
  cout<<"globalne ocieplenie ma wartosc "<<warming<<" stopni"<<endl;
  update(0.1);
    cout<<" globalne ocieplenie ma wartosc "<<warming<<" stopni"<<endl;
    local();
    cout<<" globalne ocieplenie ma wartosc "<<warming<<" stopni"<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
