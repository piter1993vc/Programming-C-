// weak_ptr_thread.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\shared_ptr.hpp>
#include <boost\weak_ptr.hpp>
#include <iostream>
#include <functional>
#include <thread>
using namespace std;

void reset(boost::shared_ptr<int> &p)
{
	p.reset();
}

void print(boost::weak_ptr<int> &w)
{
	boost::shared_ptr<int> p = w.lock();
	if (p)
		cout << *p << '\n';

}



int main()
{
	boost::shared_ptr<int> p1(new int{ 99 });
	boost::weak_ptr<int> p2(p1);
	thread t1{ reset, ref(p1) };
	thread t2{ print, ref(p2) };
	t1.join();
	t2.join();
	cout <<t1.get_id() <<endl;
    return 0;
}

