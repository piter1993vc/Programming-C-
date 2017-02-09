#ifndef HEADER_H_
#define HEADER_H_
#include <string>

namespace SALES{

class Sales{
private:
static const int Quarters=4;
double sales[Quarters];
double average;
double maxim;
double minim;



public:
Sales()
{
  sales[0]=12.3;
  sales[1]=41.2;
  sales[2]=43.5;
  sales[3]=43.2;
  average=0;
  maxim=0;
  minim=0;


}
Sales(const double arr[],int n);
void SetSales();
void ShowSales()const;
void licz();


};




}


#endif // HEADER_H_
