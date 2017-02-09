#include <iostream>

using namespace std;
double harmony(int l1,int l2);
int main()
{
    int a,b;
    double wynik;
    cout<<"podaj 2 liczby : ";
   while((cin>>a>>b)&&a>0&&b>0)
   {
       wynik=harmony(a,b);
       cout<<"srednia jharmoniczna to: "<<wynik<<endl;

        cout<<"podaj ponownie 2 liczby: ";

   }
    cout << "Hello world!" << endl;
    return 0;
}
double harmony(int l1,int l2)

{
double x,y;
x=l1;
y=l2;
    return 2.0*x*y/(x+y);
}
