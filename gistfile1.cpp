// a small program to solve Problem 3 in the Euler Project 
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

int main() {

	// define our variables
	// using a bigger type that int here
	unsigned long long factorNumber = 600851475143;
	// set a flag for my prime number catcher
	bool isPrime = 1;
	// start prime search here
	int lastPrime = 2;

		// thought this for loop would need to be a while loop
		// but by happy coincidence it terminates when the solution has been found
		for (int i = lastPrime; i < factorNumber; i++) {
			
				// print to screen so I can see progress
				std::cout << factorNumber << std::endl;
				std::cout << i << std::endl;
		
				// reset prime identifier catcher
				isPrime = 1;
		
				// determine if i is a potential prime factor
				for (int j = 2; j < i; j++) {
					if(i%j == 0)
						isPrime = 0;
				}

				// if i is prime and if i divides exactly into our last factor
				// then i is the highest yet prime factor
				if(isPrime && (factorNumber%i == 0))
				{
					lastPrime = i;
					factorNumber = factorNumber / i;
				}
			}
	
	// print result
	std::cout << factorNumber;
	std::cin.get();
	return 0;
}
