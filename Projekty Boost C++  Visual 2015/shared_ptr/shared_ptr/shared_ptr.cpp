// shared_ptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\shared_ptr.hpp>
#include <iostream>

using namespace boost;


int main()
{
	shared_ptr<int> p1(new int{ 1 });
	std::cout << *p1 <<std::endl;
	shared_ptr<int> p2(p1);
	std::cout << *p2 <<std::endl;
	p1.reset(new int{ 2 });
	

	std::cout << *p2 << std::endl;



	/*sprawdzenie czegos wskaznik do referencji oraz referencja do wskaznika*/
	int i = 23;
	int &k = i; //referencja
	std:: cout<< k << std::endl;
	int *wsk = &k; //wskaznik do referencji
	std::cout << *wsk << std::endl; //zmienna w referencji
	wsk++;
	std::cout << *wsk << std::endl; //wskaznik po inkrenmentacji
	wsk--;
	int &ref = *wsk; //referencja do wskaznika
	std::cout << ref << std::endl; //referencja do wskaznika
	wsk++;
	std::cout << ref << std::endl; //jak wynika z wyjscia referencja nie odwoluje sie do wskaznika ale do zmiennej na ktora wskazuje wskaznik
    return 0;
}

