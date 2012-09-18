// ugly ugly code to solve Project Euler problem 17


#include <ttmath.h>
#include <iostream>
#include <math.h>

int main()
{
	
	int myVar = 0;
	int runningTotal = 0;

	for(int i = 1; i <= 1000; i++)
	{
		myVar = i;
		float myVarAsFloat = myVar;
		int myVarLen = 1;
		int myVarChars = 0;

		while(myVarAsFloat/10 >= 1){
			myVarLen++;
			myVarAsFloat = myVarAsFloat/10;
		}

		
		

	
	}

    //std::cout << bucket << std::endl;
	std::cin.get();
}