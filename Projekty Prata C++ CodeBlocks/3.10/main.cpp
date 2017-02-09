#include <iostream>

using namespace std;

int main()
{
    float hats,hands;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"podaj liczbe ";
    cin>>hats;
     cout<<"podaj druga liczbe ";
    cin>>hands;

    cout<<"hats= "<<hats<<" hands= "<<hands<<endl;

    cout<<"hats+hands= "<<hats+hands<<endl;
     cout<<"hats-hands= "<<hats-hands<<endl;
      cout<<"hats*hands= "<<hats*hands<<endl;
       cout<<"hats/hands= "<<hats/hands<<endl;



    return 0;
}
