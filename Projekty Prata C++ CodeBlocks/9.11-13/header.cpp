#include <iostream>
#include "header.h"
namespace pers{

using std::cout;
using std::cin;
using std::endl;

void getPerson(person & rp)
{
    cout<<"podaj imie: "<<endl;
    cin>>rp.fname;
    cout<<"podaj nazwisko: "<<endl;
    cin>>rp.fname;



}

void showPerson(const person &rp)
{
std::cout<<rp.lname<<", "<<rp.fname;
}
}

namespace debt{


void getDebts(debts &rd)
{
    getPerson(rd.name);
    std::cout<<"podaj kwote: "<<endl;
    std::cin>>rd.amount;
}

void showDebts(const debts &rd)
{

    showPerson(rd.name);
    std::cout<<rd.amount<<"zl "<<std::endl;
}
double sumDebts(const debts ar[],int n)
{
    double total=0;
    for(int i=0;i<n;i++)
    {
        total+=ar[i].amount;

    }
    return total;
}



}
