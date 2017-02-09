// scoped_ptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\scoped_ptr.hpp>
#include <iostream>
using namespace boost;
using namespace std;
int main()
{
	scoped_ptr<int> p( new int{2} );
	cout << *p << endl;
	p.reset(new int{ 15 });
	cout << *p << endl;
	cout << p.get() << endl;
	cout << boolalpha << static_cast<bool>(p) << endl;
	p.reset();
	cout << boolalpha << static_cast<bool>(p) << endl;

    return 0;
}

