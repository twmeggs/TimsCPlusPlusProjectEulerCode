
// an ugly solution to Project Euler problem 12
// takes too long and is open to error


#include <iostream>
#include <string>
#include "timsFuncs.h"

using namespace std;

int main() 
	{

		long long triNum = 0;
		int numFactors = 500;
		int totalFactors = 0;


		for(int i=1; totalFactors<=numFactors; i++){
		
		cout << i << " : " << triNum << " : " << totalFactors << endl;

			totalFactors = 0;
			triNum = triNum + i;

			//put in to speed up
			if(triNum%20 ==0) {
				for(int j = 1; j <= triNum; j++){
					if(triNum%j == 0){
						totalFactors = totalFactors++;
					}
				}
			}

		}

		cout << triNum << endl;
		cin.get();
		return 0;
} 