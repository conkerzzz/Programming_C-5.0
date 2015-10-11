// Ex1_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Enter a series of space delimited numbers, provide EOF (ctrl+z). Will print how many are negative numbers." << std::endl;
	int number;
	int negativeNumbers = 0;
	while (std::cin >> number){
		if (number < 0){
			negativeNumbers++;
		}
	}
	std::cout << "This many were negative: " << negativeNumbers << std::endl;

	return 0;
}

