#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    using namespace SALES;
    double liczby[4]{1.2,3.4,4.2,5.2};
    sales obj1;
    sales obj2;
    setsales(obj1,liczby,4);
    setsales(obj2);
    showsales(obj1);
    showsales(obj2);


    cout << "Hello world!" << endl;
    return 0;
}
