// rzutowanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cmath>



int main()
{
	int k = 12;
	float l = *(float*)&k; //wyciagniecie adresu, rzutowanie adresu, dereferencja wskaznika
	std::cout <<std::dec<<std::cout.precision(3)<< l << std::endl;
}