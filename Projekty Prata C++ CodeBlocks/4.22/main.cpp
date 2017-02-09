#include <iostream>
#include <cstring>

using namespace std;
char *getname();
int main()
{
    char *name;
    name=getname();
    cout<<name<<" pod adresem "<<(int*)name<<endl;
    delete [] name;


    name=getname();
    cout<<name<<" pod adresem "<<(int*)name<<endl;
    delete [] name;

    return 0;
}
char *getname()
{
    char temp[80];
    cout<<"podaj imie:";
    cin>>temp;
    char *pn=new char[strlen(temp)+1];
    strcpy(pn,temp);
    return pn;



}
