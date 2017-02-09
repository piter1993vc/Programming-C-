// shared_ptr_time.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\shared_ptr.hpp>
#include <iostream>
#include <ctime>
#define BOOST_SP_USE_QUICK_ALLOCATOR
using namespace boost; //przestzren nazw boost

int main()
{
	shared_ptr<int> p;
std:time_t then = std::time(nullptr); //pomiar czasu
	for (int i = 0; i < 1000000; ++i)
		p.reset(new int{ i }); //dynamiczna alokacja pamieci
	std::time_t now= std::time(nullptr); //pomiar czasu
	std::cout << now - then << std::endl; //wynik czasu dzialania programu
}

