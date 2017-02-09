#include <iostream>
extern double warming;
void update(double  dt);
void local();
using std::cout;
void update(double dt)
{
extern double warming;
warming+=dt;
cout<<"zwiekszam parametr ocieplenia do "<<warming<<" stopni"<<std::endl;


}
void local()
{
  double warming=0.8;
  cout<<"lokalne ocieplenie wynosi "<<warming<<" stopni"<<std::endl;
   cout<<"ale globalne ocieplenie ma wartosc "<<::warming<<" stopni"<<std::endl;



}
