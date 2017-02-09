// scope_exit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\scope_exit.hpp>
#include <iostream>
int *foo()
{
	int *i = new int{ 10 };
	BOOST_SCOPE_EXIT(&i)
	{
		delete i;
		i = 0;
	}BOOST_SCOPE_EXIT_END
		std::cout << *i << std::endl;
	return i;

}
int main()
{
	int *j = foo();
	std::cout << *j << std::endl;
    return 0;
}

