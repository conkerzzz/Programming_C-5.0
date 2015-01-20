//I predicted equal inputs would sum the numbers, but this is not he case.
//E. g. 1 and 1 yields 1. 
//Ah, of course, the correct answer is that given equal inputs, it will add the number to zero (sum), hence 1.


#include <iostream>
int main(){
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	int lower, upper;
	if (v1 <= v2){
		lower = v1;
		upper = v2;
	} else {
		lower = v2;
		upper = v1;
	}
	int sum(0);
	for (int val = lower; val <= upper; ++val){
		sum += val;
	}
	std::cout << "Sum of " << lower << " to " << upper << " inclusive is " << sum << std::endl;
	return 0;
}