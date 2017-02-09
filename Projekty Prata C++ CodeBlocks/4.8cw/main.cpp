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
   pizza *hut=new pizza;
     cout<<"podaj srednice pizzy:";
  cin>>hut->srednica;
  cout<<"podaj marke pizzy:";
  cin>>hut->marka;

    cout<<"podaj wage pizzy:";
  cin>>hut->waga;




            cout << hut->marka<<" "<<hut->srednica<<" "<<hut->waga<< endl;

delete hut;

    return 0;
}
