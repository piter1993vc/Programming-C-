#include <iostream>

using namespace std;
const double *f1(const double ar[],int n);
const double *f2(const double [],int );
const double *f3(const double *,int );
int main()
{
   double av[3]{1112.3,1542.6,2227.9};
   const double*(*p1)(const double *,int)=f1;
   auto p2=f2;


   cout<<"uzywanie wskaznikow do funkcji "<<endl;
   cout<<"adres, wartosc zwracana "<<endl;
   cout<<(*p1)(av,3)<<" : "<<*(*p1)(av,3)<<endl;
   cout<<p2(av,3)<<" : "<<*p2(av,3)<<endl;



const double*(*pa[3])(const double *,int){f1,f2,f3};
auto pb=pa;

   cout<<"uzywanie wskaznikow do funkcji "<<endl;
   cout<<"adres, wartosc zwracana "<<endl;
   for(int i=0;i<3;i++)
   {

   cout<<pa[i](av,3)<<" : "<<*pa[i](av,3)<<endl;
   cout<<(*pb[i])(av,3)<<" : "<<*(*pb[i])(av,3)<<endl;

   }

cout<<"uzywanie wskaznikow do tablicy wskazniokow do funkcji "<<endl;
cout<<"adres, wartosc zwracana\n";
auto pc=&pa;
cout<<(*pc)[0](av,3)<<" : " <<*(*pc)[0](av,3)<<endl;
//trudniejsza metoda deklarowania
const double *(*(*pd)[3])(const double *,int)=&pa;
cout<<"adres, wartosc zwracana\n";

cout<<(*pd)[0](av,3)<<" : " <<*(*pd)[0](av,3)<<endl;
//adres zwracany
const double *wsk=(*pd)[0](av,3);
cout<<wsk<<" : " <<*wsk<<endl;
cout<<(*(*pd)[2])(av,3)<<" : "<<*(*(*pd)[2])(av,3)<<endl;




























    return 0;
}























const double *f1(const double ar[],int n)
{
    return ar;

}
const double *f2(const double ar[],int n)
{
    return ar+1;

}
const double *f3(const double *ar,int n)
{

    return ar+2;
}
