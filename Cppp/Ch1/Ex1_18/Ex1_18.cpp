// Ex1_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	std::cout << "Enter two whitespace-separated numbers, will print each number in the range between the numbers (inclusive) from lower to higher number." << std::endl;
	std::cin >> a >> b;
	int lowerBound, upperBound;
	if (a < b){
		lowerBound = a;
		upperBound = b;
	}
	else if (a > b){
		lowerBound = b;
		upperBound = a;
	}
	else { //a and b are equal
		lowerBound = a;
		upperBound = b;
	}
	for (int i = lowerBound; i <= upperBound; ++i){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}

