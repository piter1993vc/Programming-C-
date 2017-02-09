#include <iostream>

using namespace std;

int main()
{
    int updates=6;
    int *p_updates;
    p_updates=&updates;

    cout<< " wartosci updates "<<updates;
    cout<<" *p_updates= "<<*p_updates<<endl;

    cout<<"adresy: &updates= "<<&updates<<" p_updates= "<<p_updates<<endl;

    (*p_updates)+=1;
    cout<<"teraz updates = "<<updates<<endl;


    return 0;
}
