// boost_pool_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\pool\object_pool.hpp>


int main()
{
	boost::object_pool<int> pool;
	int *i = pool.malloc();
	*i = 10;
		int *j = pool.construct(2);
	pool.destroy(i);
	pool.destroy(j);
    return 0;
}

