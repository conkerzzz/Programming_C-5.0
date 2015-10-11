// Ex1_20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	std::cout << "Enter two whitespace-separated numbers, will sum the numbers in a user specified range (inclusive)." << std::endl;
	std::cin >> a >> b;
	//int lowerBound, upperBound;
	//if (a < b){
	//	lowerBound = a;
	//	upperBound = b;
	//}
	//else if (a > b){
	//	lowerBound = b;
	//	upperBound = a;
	//}
	//else { //a and b are equal
	//	lowerBound = a;
	//	upperBound = b;
	//}
	
	// Omitting the if test that sets the lower and upper bounds, given the user input 7 and 3, I predict the for body will not be executed as the condition will not be met. Output will be 7.

	int sum = a;
	for (int i = a; i < b; i++){
		sum += (i+1);
	}
	std::cout << sum << std::endl;
	return 0;
}
// That appears to be the right prediction. Output: 7
