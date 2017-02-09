
#include <iostream>
#include <cstring>
#include <string>



#include "header.h"
using namespace std;

Rachunek::Rachunek(const std::string &imie, const char *konto,float kasa)
{
    name=imie;
    strcpy(nr_konta,konto);
    saldo=kasa;

}


void Rachunek::show()const
{
    cout<<"imie:     "<<name<<endl;
    cout<<"nr_konta: "<<nr_konta<<endl;
    cout<<"saldo:    "<<saldo<<endl;

}

void Rachunek::add(const float &hajs)
{
     saldo+=hajs;

}

void Rachunek::rem(const float &hajs)
{
    saldo-=hajs;

}

