#include <iostream>

using namespace std;

int main()
{
    double dafne_start=100.0;
    double cleo_start=100.0;
    double dafne_licz=dafne_start;
    double cleo_licz=cleo_start;
    int lata=0;
  do
  {
      dafne_licz+=10.0;
      cleo_licz+=0.05*cleo_licz;
      lata++;
      cout<<"rok: "<<lata<<endl;
      cout<<"hajs dafne: "<<dafne_licz<<endl;
      cout<<"hajs cleo: "<<cleo_licz<<endl;


  }while(cleo_licz<dafne_licz);

    return 0;
}
