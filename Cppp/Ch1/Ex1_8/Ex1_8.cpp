//I predict that the following is
//std::cout << "/*"; legal
//std::cout << "*/"; legal
//std::cout << /* "*/" */; illegal
//One way of achieving output for the last example:


#include <iostream>
int main(){
	std::cout << "/*"; //ok
	std::cout << "*/"; //ok
	std::cout << /* "*/" */"/*"*/; //ok
	return 0;
}