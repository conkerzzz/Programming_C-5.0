// Ex1_22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Enter two sales items with the same ISBN, will print their sum." << std::endl;
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.same_isbn(item2))
	{
		std::cout << "The sum is: " << item1 + item2 << std::endl;
	}
	else
	{
		std::cout << "Those items appear to hade disparate ISBNs.";
	}
	return 0;
}

