// a small program to solve problem 9 from the Euler Project

#include <iostream>

int main(){

	for(int c = 3; c < 1000; c++){
		for(int b = 2; b < 1000; b++){
			for(int a = 1; a < 1000; a++){

				if((a+b+c == 1000) && (a<b) &&(b<c)){
					if((a*a)+(b*b)==(c*c)){
						std::cout << "Found it" << std::endl;
						std::cout << a << std::endl;
						std::cout << b << std::endl;
						std::cout << c << std::endl;
						std::cin.get();
					}
				}
			}
		}
		std::cout << c << std::endl;
	}
	std::cin.get();
	return 0;
}



