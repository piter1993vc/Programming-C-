// make_shared.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\make_shared.hpp>
#include <typeinfo>
#include <iostream>

using namespace boost;



int main()
{
	auto p1 = make_shared<int>(1);
	std::cout << typeid(p1).name() << std::endl;
	auto p2 = make_shared<int[]>(10);
	std::cout << typeid(p2).name() << std::endl;

    return 0;
}

