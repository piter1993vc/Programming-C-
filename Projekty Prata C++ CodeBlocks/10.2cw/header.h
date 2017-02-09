#ifndef HEADER_H_
#define HEADER_H_
#include <string>


class Person{
private:

static const int limit=256;
std::string lname;
char fname[limit];


public:
    Person(){lname=""; fname[0]='\0'; }
Person(const std::string &ln,const char *fn="Hejty");
void show()const;
void Formalshow() const;

};


#endif // HEADER_H_
