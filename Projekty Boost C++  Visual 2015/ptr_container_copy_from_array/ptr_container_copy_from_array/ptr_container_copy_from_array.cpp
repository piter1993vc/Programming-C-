// ptr_container_copy_from_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost/ptr_container/ptr_vector.hpp>
#include <boost/ptr_container/ptr_inserter.hpp>
#include <array>
#include <algorithm>
#include <iostream>


int main()
{


	boost::ptr_vector<int> v;
	std::array<int, 3> a{ { 0, 1, 2 } };
	std::copy(a.begin(), a.end(), boost::ptr_container::ptr_back_inserter(v));
	std::cout << v.size() << '\n';
}