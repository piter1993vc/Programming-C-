#include <iostream>

using namespace std;
const int sizer=8;
int ilejest(const int *tab1,const int *tab2);
int main()
{
    int ciasteczka[sizer]{1,2,3,4,5,6,7,8};
    int ile=ilejest(ciasteczka,ciasteczka+8);
    cout<<"wszystcy zjedli "<<ile<<" ciasteczek"<<endl;

   ile=ilejest(ciasteczka+4,ciasteczka+8);
    cout<<"ostatnie 4 osoby zjadly "<<ile<<" ciasteczek"<<endl;

       ile=ilejest(ciasteczka,ciasteczka+4);
    cout<<"pierwsze 4 osoby zjadly "<<ile<<" ciasteczek"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
int ilejest(const int *tab1,const int *tab2)
{
int total=0;

const int *wsk;
for(wsk=tab1;wsk!=tab2;wsk++)
{
    total+=*wsk;
}
return total;



}
