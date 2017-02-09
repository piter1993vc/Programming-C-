#include <iostream>

using namespace std;
void swapr(int &a,int &b);
void swapp(int *a,int *b);
void swapc(int a,int b);
int main()
{
   int wallet1=300;
   int wallet2=350;
   cout<<"wallet1=$"<<wallet1;
   cout<<" wallet2=$"<<wallet2;

   cout<<"\nzamiana wartosci za pomocą rekurencji"<<endl;
   swapr(wallet1,wallet2);
    cout<<"wallet1=$"<<wallet1;
   cout<<" wallet2=$"<<wallet2;

       cout<<"\nzamiana wartosci za pomocą wskaznika"<<endl;
   swapp(&wallet1,&wallet2);
    cout<<"wallet1=$"<<wallet1;
   cout<<" wallet2=$"<<wallet2;

      cout<<"\nzamiana wartosci za pomocą kopii"<<endl;
   swapc(wallet1,wallet2);
    cout<<"wallet1=$"<<wallet1;
   cout<<" wallet2=$"<<wallet2;


    return 0;
}
void swapr(int &a,int &b)
{
    int temp ;
    temp=a;
    a=b;
    b=temp;

}

void swapp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

void swapc(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
