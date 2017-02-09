#ifndef HEADER_H_
#define HEADER_H_
#include <string>


class Rachunek{
private:
    enum{MAX=20};


    std::string name;
    char nr_konta[MAX];
    float saldo;





public:
Rachunek(const std::string &imie="janusz", const char *konto="73200000233",float kasa=123.45);
void show()const;
void add(const float &hajs);
void rem(const float &hajs);







};


#endif // HEADER_H_
