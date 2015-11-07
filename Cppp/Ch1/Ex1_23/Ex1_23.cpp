// Ex1_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"

int _tmain(int argc, _TCHAR* argv[]){
	std::cout << "Enter several book objects, Ctrl+Z and Enter to quit, apparently." << std::endl;
	bool entering = true;
	Sales_item sum, item;
	if (std::cin >> sum){
		while (std::cin >> item) {
			if (sum.same_isbn(item)){
				sum = sum + item;
			} else {
				std::cout << sum << std::endl;
				sum = item;
			}
		}
		std::cout << sum << std::endl;
	}
	else {
		std::cout << "No data." << std::endl;
		return -1;
	}
	return 0;
}

