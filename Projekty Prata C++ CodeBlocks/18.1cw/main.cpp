#include <iostream>
#include <initializer_list>
#include <list>
#include <string>

using namespace std;
template<typename T>
list<T> average_list(initializer_list<T> a)
{

    return  a;

}
template<> list<double> average_list<double>(initializer_list<double> a)
{

    return a;

}
ostream & operator<<(ostream & os,list<double> lista)
{
    list<double>::iterator a=lista.begin();
    int ile=lista.size();
    for(int i=0;i<ile;i++)
    {
      os<<*a<<" ";
      a++;
    }
    return os;

}
int main()
{
    auto q=average_list<double>({15,4,10.7,9.0});
    cout<<q<<endl;
   cout<<average_list<double>({20,30,19,17,45,38})<<endl;
    auto ad=average_list<double>({'A',70,65.33});
   cout<<ad<<endl;

    return 0;
}
