#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
    rect str1{12.4,31.2};
    polar str2=rect_to_polar(str1);
    show_polar(str2);


    cout << "Hello world!" << endl;
    return 0;
}
