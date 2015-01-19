//We may ease the simulation by pretending the iteration bounds are -1 and 1 for i.
//I predict the final value of sum will be 0. 

#include <iostream>
int main(){
	int sum = 0;
	for (int i = -100; i <= 100; ++i){
		sum += i;
	}
	return 0;
}
//Yep, debugger says so