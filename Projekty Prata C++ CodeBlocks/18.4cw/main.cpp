#include <iostream>

#include <list>
#include <iterator>
#include <algorithm>

using namespace std;


template<class T> // klasa funktora definiuje operator()()
class TooBig
{
    private:
        T cutoff;
    public:
        TooBig(const T & t) : cutoff(t) {}
        bool operator()(const T & v) { return v > cutoff; }
};
auto funkcja=[](int x){cout<<x<<" ";};
int main()
{

    TooBig<int> f100(100); // ograniczenie = 100

    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

      // w C++11 mo¿na alternatywnie u¿yæ:
    // list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    // list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

     cout << "Oryginalne listy:\n";
    for_each(yadayada.begin(), yadayada.end(),funkcja );
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(),funkcja);
    cout << endl;
    yadayada.remove_if([](int x){return x>100;});             // u¿ywa nazwanego obiektu funkcyjnego
    etcetera.remove_if([](int x){return x>200;}); // tworzy obiekt funkcyjny

    cout << "Przyciete listy:\n";
    for_each(yadayada.begin(), yadayada.end(), funkcja);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), funkcja);
    cout << endl;

    return 0;
}
