// a small program to solve Problem 10 in the Euler Project 
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.


#include <iostream>
#include <math.h>



int main() {

	// define our variables
	// set a flag for my prime number catcher
	bool isPrime = 1;
	// the max number beyond which we do not wish to search
	int primeNum = 2000000;
	// initialise a 'last prime found' holder
	int lastPrime = 2;	
	// initialise a testing variable
	int testNumber = lastPrime;
	// build a total bucket - has to be a long long as the sum is going to be big
	long long primeBucket = 0;	
	
	// while look that looks for primes up to a certain number
		while(lastPrime < primeNum) {			
				
			// print out last prime
			std::cout << lastPrime << std::endl;

				//add last prime to the bucket total
				primeBucket = primeBucket + lastPrime;

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
					if(testNumber%2 == 0){
						isPrime = 0;
					}
					else if(isPrime){
						
						for(int i=3; i < (testNumber/2)+1; i+=2){
							
							if(testNumber%i == 0){
								isPrime = 0;
							}
						}
					}
				
				}

				// set last prime to the found number
				lastPrime = testNumber;
				
		}

	// print result
	std::cout << primeBucket;
	std::cin.get();
	return 0;
}
