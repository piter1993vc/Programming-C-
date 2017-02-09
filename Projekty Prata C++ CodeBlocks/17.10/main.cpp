#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout<<fixed<<right;
  cout<<setw(6)<<"N"<<setw(20)<<"pierw kwadratowy"<<setw(27)<<"pierw czwartego stopnia\n";
  double root;
  for(int n=10;n<=100;n+=10)
  {
      root=sqrt(double(n));
      cout<<setw(6)<<setfill('.')<<n<<setfill(' ')<<setw(14)<<setprecision(3)<<root<<setw(23)<<setprecision(4)<<sqrt(root)<<endl;


  }
    return 0;
}
