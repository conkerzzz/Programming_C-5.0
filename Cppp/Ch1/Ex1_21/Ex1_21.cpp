// Ex1_21.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
#include "Sales_item.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Sales_item book;
	while (std::cin >> book){
		std::cout << "The book entered: " << book << std::endl;
	}
	return 0;
}

