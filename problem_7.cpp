// a small program to solve Problem 7 in the Euler Project 
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?


#include <iostream>

int main() {

	// define our variables
	// set a flag for my prime number catcher
	bool isPrime = 1;
	// the index of the prime we are at
	int primeIndex = 1;
	// the index of the prime we are looking for
	int primeNum = 10001;
	// initialise a 'last prime found' holder
	int lastPrime = 2;	
	// initialise a testing variable
	int testNumber = lastPrime;

		// while look that looks for primes up to a certain number
		while(primeIndex < primeNum) {			
				
				// reset to get the while working
				isPrime = 0;

				// determine if i is a potential prime
				while(!isPrime) {
					// iterate our test number
					testNumber++;

					// counter-factual, assuming number is not prime
					isPrime = 1;

					//loop up to our test number looking for divisibility
					// this can be improved dramatically by include squareroot test
					// or maybe adapting to a sieve
					for(int i=2; i < testNumber; i++){
							
						if(testNumber%i == 0){
							isPrime = 0;
						}
						
					}
				
				}
				// set last prime to the found number
				lastPrime = testNumber;
				// iterate the prime index we are using to count
				primeIndex++;
		}

				
	// print result
	std::cout << lastPrime;
	std::cin.get();
	return 0;
}
