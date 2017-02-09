#include <iostream>
#include <string>

using namespace std;
struct pizza{
string marka;
float srednica;
int  waga;

};
int main()
{
   pizza hut;
  cout<<"podaj marke pizzy:";
  cin>>hut.marka;
    cout<<"podaj srednice pizzy:";
  cin>>hut.srednica;
    cout<<"podaj wage pizzy:";
  cin>>hut.waga;




            cout << hut.marka<<" "<<hut.srednica<<" "<<hut.waga<< endl;



    return 0;
}
