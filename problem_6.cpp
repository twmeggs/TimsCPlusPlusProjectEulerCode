// a small program to solve Problem 6 from the Euler Project
// The sum of the squares of the first ten natural numbers is, 385
// The square of the sum of the first ten natural numbers is, 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>

int main() {

	// define the number of elements in the series
	int elements = 100;
	int sumOfSqs = 0;
	int sqOfSums = 0;
	int sums = 0;

	for (int i = 1; i < elements + 1; i++) {
		sumOfSqs = sumOfSqs + (i*i);
		sums = sums + i;
	}

	sqOfSums = (sums*sums);

	std::cout << sqOfSums - sumOfSqs << std::endl;
	std::cin.get();
	return 0;
}
