#include <iostream>
#include "header.h"
using namespace std;
const int STKS=4;
int main()
{

using std::cout;
using std::ios_base;
/*
cout<<" tworzenie nowych obiektor przy uzyciu konstruktorow\n";
Stock stock1("NanoSmart",20,12.50);
stock1.show();
Stock stock2=Stock("BurakPol",2,2.0);
stock2.show();



cout<<"przypisanie stock1 do stock2:\n";
stock1=stock2;
cout<<"wypis ze stock1 i stock2:\n";
stock1.show();
stock2.show();

cout<<"wyzerowanie obiektu konstruktorem:\n";
stock1=Stock("FutroPol",10,50.0);
stock1.show();
cout<<"gotowe\n";

*/

Stock stocks[STKS]={

Stock("NanoSmart",12,20.0),
Stock("BurakPOL",200,2.0),
Stock("GruzPOL",130,3.25),
Stock("NanoSmart",60,6.5)



};
std::cout<<"portfel inwestycyjny:\n";
int st;
for(st=0;st<STKS;st++)
{
    stocks[st].show();

}
const Stock *top=&stocks[0];
for(st=0;st<STKS;st++)
{
    top=&top->topval(stocks[st]);

}
std::cout<<"\nNajbardziej wartosciowy pakiet:\n";
top->show();

    return 0;
}
