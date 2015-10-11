// Ex1_19.cpp : Defines the entry point for the console application.
// Givern 1000 and 2000, the program should print all whole numbers between these (inclusive).
// Modified the program to print maximum 10 numbers per line.

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
	int numbersPerLine = 0;
	for (int i = lowerBound; i <= upperBound; i++){ //both preincrementor and postincrementor works here
		std::cout << i << " ";
		if (numbersPerLine == 9){
			std::cout << std::endl;
			numbersPerLine = 0;
		}
		else {
			numbersPerLine++;
		}
	}
	

	std::cout << std::endl;
	return 0;
}