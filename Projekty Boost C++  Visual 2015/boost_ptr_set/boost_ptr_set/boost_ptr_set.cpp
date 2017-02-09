// boost_ptr_set.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\ptr_container\ptr_set.hpp> //boost set
#include <boost\ptr_container\indirect_fun.hpp> //metody dla set w boost
#include <memory> //inteligentne wskazniki
#include <set> //kontener set w std
#include <iostream> 
#include <functional> //szablon dla funkcji metod i wyrazen lambda np function<int(int , int )> u; u = [&](int a, int b)->int {cout << a << " " << b << endl; return a + b; };
using namespace std;

int main()
{
	boost::ptr_set<int> v; //obiekt set z boost
	v.insert(new int{ 1 }); //metoda insert , dodanie wartosci
	v.insert(new int{ 3 });
	cout << *v.begin() << endl; //wyswietlenie wyniku

	set < unique_ptr<int>, boost::indirect_fun<less<int>>> v2; //obiekt set z biblioteki standardowej c++
	v2.insert(unique_ptr<int>(new int{ 2 })); //metoda z biblioteki standardowej dla set
	v2.insert(unique_ptr<int>(new int{ 4 }));
	cout << **v2.begin() << endl; //podwojna dereferencja iteratora
	int k = 12, l = 13;
	function<int(int , int )> u; //delegat szablonu function
	u = [&](int a, int b)->int {cout << a << " " << b << endl; return a + b; }; //przypisanie wyrazenia lambda do delegata
	cout << u(k, l) << endl; //wywolanie delegata
    return 0;
}

