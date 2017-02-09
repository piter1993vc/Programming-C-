#ifndef HEADER_H_
#define HEADER_H_

#include <string>

namespace pers{

struct person{

std::string fname;
std::string lname;



};
void getPerson(person &);
void showPerson(const person &);

}

namespace debt{

using namespace pers;
struct debts{
person name;
double amount;
};
void getDebts(debts &);
void showDebts(const debts &rd);
double sumDebts(const debts ar[],int en);



}




#endif // HEADER_H_






