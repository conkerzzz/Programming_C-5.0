// Ex1_16.cpp : Defines the entry point for the console application.
// Prints the largest of two user-supplied numerical inputs.

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	std::cout << "Supply two numerical inputs, separated by space. Will print the largest." << std::endl;
	std::cin >> a >> b;
	if (a > b){
		std::cout << a << std::endl;
	}
	else if (b > a){
		std::cout << b << std::endl;
	}
	else {
		std::cout << "It appears they are equal, jamjars." << std::endl;
	};

	return 0;
}

