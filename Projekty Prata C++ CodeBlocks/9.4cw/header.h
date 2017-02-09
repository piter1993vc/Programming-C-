
#ifndef HEADER_H_
#define HEADER_H_
namespace SALES{

const int ile=4;

struct sales{

double sale[ile];
double average;
double maxim;
double minim;


};
void setsales(sales & s,const double ar[], int n);
void setsales(sales & s);
void showsales(const sales &s);



}





#endif // HEADER_H_
