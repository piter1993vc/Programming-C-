#include <iostream>

using namespace std;
struct pudelko
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float pojemnosc;
};
template <class T>
T & rew( T &a, T &b);

template<> pudelko & rew(pudelko &a,pudelko &b);




int main()
{
    pudelko a{"amd",12.3,14.2,22.2,33.3};
    pudelko b{"nvidia",12.4,14.4,22.22,33.4};
    pudelko c=rew(a,b);
    cout<<c.producent<<endl;

    return 0;
}
template <class T>
T & rew( T &a, T &b)
{
return (a>b)?a:b;

}


template<> pudelko & rew(pudelko &a,pudelko &b)
{
    return a.pojemnosc>b.pojemnosc?a:b;




}
