#include <iostream>
//On win, use ctrl + z to enter end-of-file from the keyboard! (ctrl +d on unix.)


int main() {
	int sum = 0, value;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}