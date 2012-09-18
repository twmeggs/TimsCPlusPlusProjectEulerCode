
// code to solve Project Euler problem 23

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <numeric>
#include "timsFuncs.h"

using namespace std;

int main()
{
	

// set up a bucket to collect abundants
	vector<int> myAbundants;

	//set up loop to collect abundants up to our max
	for(int i = 12; i <= 28123; i++){

		
		//initialise	
		int a;
		
		// get abundants

		// init temp vector to hold results
		vector<int> tempFact;
		// calc factors
		tempFact = genFactors(i);
		// remove the last element, which will == i
		tempFact.pop_back();
		// calc sum of remaining factors
		a = accumulate( tempFact.begin(), tempFact.end(), 0 );
		// if abundant, add to results
		if(a>i)
			myAbundants.push_back(i);

	}




	// init a couple of vectors
	vector<int> nonSumOfTwoAbuns;
	vector<int> sumOfTwoAbuns;
	

	// alternative approach
	// build vector of all two-way sums of abundants

	// check size
	int b = myAbundants.size();
	
		for(int y = 0; y < b; y++)
		{
			for(int x = 0; x < b; x++)
			{
					sumOfTwoAbuns.push_back(myAbundants[y] + myAbundants[x]);
			}
		}

	// sort this vector & remove dupes
		sort (sumOfTwoAbuns.begin(), sumOfTwoAbuns.end());
		unique (sumOfTwoAbuns.begin(), sumOfTwoAbuns.end());

	// check size
	int c = sumOfTwoAbuns.size();


	// iterate through checking all numbers up to our know number against our table
	// of summed pairs
	// break if found or sum is too large
	for(int z = 1; z <= 28123; z++)
	{
		int flag = 0;

		for(int w = 0; w < c; w++)
		{
			if(z == sumOfTwoAbuns[w])
			{
				flag = 1;
				break;
			}
			
			if(sumOfTwoAbuns[w] > z)
			{
				break;
			}
			
		}
	
		
		if(!flag)
		{
			nonSumOfTwoAbuns.push_back(z);
		}

		std::cout << z << endl;

	}
				
	long long total = accumulate( nonSumOfTwoAbuns.begin(), nonSumOfTwoAbuns.end(), 0 );

	cout << total << endl;

	return 0;
}
