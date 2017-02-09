// shared_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\shared_array.hpp>
#include <iostream>

using namespace boost;

int main()
{
	shared_array<int> p1(new int[3]);
	p1[0] = 1; p1[1] = 2; p1[2] = 3;
	for(int i=0;i<3;i++)
	std::cout << p1[i] << std::endl;
	{
		shared_array<int> p2(p1);
		for (int i = 0; i < 3; i++)
			std::cout << p2[i] << std::endl;
		p2[1] = 8;
	}
	for (int i = 0; i<3; i++)
		std::cout << p1[i] << std::endl;
    return 0;
}

