#ifndef HEADER_H_
#define HEADER_H_
#include <string>


class Person{
private:


std::string name;
int handicap;


public:

Person(const std::string &ln="jan",int jebac=43);
const Person & setgolf(const std::string &napis,int handi);
void  showgolf() const;

};


#endif // HEADER_H_
