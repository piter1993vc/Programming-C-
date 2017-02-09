#include <iostream>

using namespace std;
template <typename T>
void swaps(T &a,T &b);
int main()
{
    int i=10;
    int j=20;

    cout<<"i,j: "<<i<<" "<<j<<endl;
    cout<<"uzycie funkcji swaps dla typu int "<<endl;
    swaps(i,j);
      cout<<"i,j: "<<i<<" "<<j<<endl;



      double x=24.5;
      double y=34.5;
       cout<<"x,y: "<<x<<" "<<y<<endl;
    cout<<"uzycie funkcji swaps dla typu double "<<endl;
    swaps(x,y);
      cout<<"x,y: "<<x<<" "<<y<<endl;


    return 0;
}






template <typename T>
void swaps(T &a,T &b)
{
   T temp;
   temp=a;
   a=b;
   b=temp;

}
