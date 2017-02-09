

#include <iostream>
#include <boost/accumulators/accumulators.hpp> //naglowek dla klasy
#include <boost/accumulators/statistics.hpp> //naglowek dla funkcji obliczajacych

using namespace boost::accumulators;
using namespace std::tr1;
class B { public: int a = 13; };
struct C:B //bez klauzury to dziedziczenie publiczne
{
	void func() { a++; } // struktura moze miec metody
};
int main()
{
	accumulator_set<double, features<tag::count,tag::mean,tag::variance,tag::moment<3>>> acc; //obiekt akumulatora, funktor()
	acc(12.4, weight = 12); //dodanie wartosci do akumulatora, waga 12
	acc(5.3,weight = 3);
	acc(8.1,weight = 5);
	std::cout << count(acc) << std::endl; //licznik danych w akumulatorze
	std::cout << mean(acc) << std::endl; //sredia
	std::cout << variance(acc) << std::endl; //odchylenie od sredniej
	std::cout << moment<3>(acc) << std::endl;
	acc(-9,weight = 1);
	std::cout << count(acc) << std::endl;
	std::cout << mean(acc) << std::endl;
	std::cout << variance(acc) << std::endl;
	acc(13,weight = 3);
	std::cout << count(acc) << std::endl;
	std::cout << mean(acc) << std::endl;
	std::cout << variance(acc) << std::endl;
	C x;
	x.a = 15;
	std::cout << x.a << std::endl;
	x.func();
	std::cout << x.a << std::endl;
    return 0;
}

