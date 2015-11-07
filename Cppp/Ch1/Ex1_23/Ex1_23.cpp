// Ex1_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"

int _tmain(int argc, _TCHAR* argv[]){
	std::cout << "Enter several book objects with same ISBN or Ctrl+Z and Enter to quit." << std::endl;
	bool entering = true;
	Sales_item sum, item;
	std::cin >> sum;
	while (std::cin >> item) {
		sum += item;
	}
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}

