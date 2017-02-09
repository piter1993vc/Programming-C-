#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <cstring>

using namespace std;

template<typename T>
T sum_values(const T & value)
{
    return value;
}
template<typename T,typename...Args>
T sum_values(const T & value,const Args &...args)
{

   return value+sum_values(args...);



}



int main()
{
    cout<<sum_values(12,13,14,15,16)<<endl;

    cout<<sum_values(12.2,13.5,14.7,15.2,16)<<endl;

    return 0;
}
