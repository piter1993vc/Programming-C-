// scoped_exit_lambda_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <utility>
#include <iostream>
template <typename T>
struct scope_exit
{
	scope_exit(T &&t) :t_{ std::move(t) } {}
	~scope_exit() { t_(); }
	T t_;
};
template <typename T>
scope_exit<T> make_scope_exit(T &&t) { return scope_exit<T>{std::move(t)}; }

int *foo()
{
	int *i = new int{ 10 };
	std::cout << i << std::endl;
	auto cleanup = make_scope_exit([&i]() {delete i; i = 0; });
	std::cout << i << std::endl;
std::cout << *i << std::endl;
	return i;
}

int main()
{
	int *j = foo();
	std::cout << *j << std::endl;
    return 0;
}

