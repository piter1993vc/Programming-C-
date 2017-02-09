// pointer_container.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\ptr_container\ptr_vector.hpp>
#include <boost\shared_ptr.hpp>
#include <iostream>
#include <ctime>

using namespace std;
void print(float u)
{
	cout << u << endl;
}
int main()
{
	srand(time(nullptr));
	boost::ptr_vector<float> v;
	for (int i = 0; i < 10000; i++)
	{

		v.push_back(new float{ rand() % 1324 + static_cast<float>(1.0/(rand()%153+1)) });
	}

	for_each(v.begin(), v.end(), print);
    return 0;
}

