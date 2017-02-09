
#include <iostream>
#include <cstring>
#include <string>


#include "header.h"
using namespace std;

Person::Person(const std::string &ln,const char *fn)
{
    lname=ln;
strcpy(fname,fn);


}


void Person::show()const
{
    cout<<"imie: "<<fname<<endl;
    cout<<"nazwisko: "<<lname<<endl;

}

void Person::Formalshow() const
{
     cout<<"nazwisko: "<<lname<<endl;
     cout<<"imie: "<<fname<<endl;


}

