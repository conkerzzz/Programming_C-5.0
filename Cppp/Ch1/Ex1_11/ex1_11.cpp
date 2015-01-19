#include <iostream>
int main(){
	int init(10);
	while (init >= 0){
		std::cout << init << std::endl;
		--init;
	}
	for (int init = 10; init >= 0; --init){
		std::cout << init << std::endl;
	}
	return 0;
}