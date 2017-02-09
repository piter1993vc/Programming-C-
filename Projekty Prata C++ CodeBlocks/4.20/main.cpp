#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char animal[20]="niedzwiedz";
    const char *bird="myszolow";
    char *ps;
    cout<<animal<<" oraz "<<bird<<endl;
    cout<<"podaj rodzaj zwierzecie: ";
    cin>>animal;

    ps=animal;
    cout<<ps<<"!\n";
    cout<<"przed uzyciem strcpy():\n";
      cout<<animal<<" pod adresem "<<(int*)animal<<endl;
       cout<<ps<<" pod adresem "<<(int*)ps<<endl;

    ps=new char[strlen(animal)+1];
    strcpy(ps,animal);
    cout<<" po uzyciu strcpy(): \n";
       cout<<animal<<" pod adresem "<<(int*)animal<<endl;
       cout<<ps<<" pod adresem "<<(int*)ps<<endl;

   delete [] ps;

    return 0;
}
