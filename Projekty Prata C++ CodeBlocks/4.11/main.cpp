#include <iostream>

using namespace std;
struct inflatable{
    char name[20];
    float volume;
    double price;

};
int main()
{
    inflatable guest=
    {
       "glorious gloria",
       1.88,
       29.99


    };

    inflatable pal=
    {
      "audius para",
      12.34,
      29.28


    };
    cout<<"wpisz na swoja liste gosci jeszcze "<<guest.name;
    cout<<" oraz "<<pal.name<<" !\n";
    cout<<"Mozesz miec ich za "<<guest.price+pal.price<<" zl"<<endl;

     return 0;
}
