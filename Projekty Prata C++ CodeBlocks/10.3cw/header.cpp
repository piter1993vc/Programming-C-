
#include <iostream>
#include <cstring>
#include <string>


#include "header.h"
using namespace std;

Person::Person(const std::string &ln,int jebac)
{
    name=ln;
    handicap=jebac;

}

 const Person & Person::setgolf(const std::string &napis,int handi)
{
    this->name=napis;
    this->handicap=handi;
    return *this;

}

void  Person::showgolf() const
{

    cout<<"imie: "<<name<<endl;
    cout<<"handicap: "<<handicap<<endl;
}


