// code to solve Project Euler problem 25

#include <iostream>
#include <ttmath.h>

int main()
{

	//declare variables

	ttmath::Int<1000> miFibo = 0;
	ttmath::Int<1000> oldFiboOne = 2;
	ttmath::Int<1000> oldFiboTwo = 1;
	ttmath::Big<1000,1> testFibo = 0;
	bool sizeTest = true;
	int miIndex = 4;

	while( sizeTest )
	{
		
		miFibo = oldFiboOne + oldFiboTwo;
		oldFiboTwo = oldFiboOne;
		oldFiboOne = miFibo;
		testFibo = miFibo;
		std::cout << miFibo << " : " << miIndex << std::endl;
		miIndex++;
			for(int i = 1; i <1000; i++)
			{
				testFibo = testFibo/10;
			}
			if( testFibo > 1) sizeTest = false;
	}
	std::cout << miIndex << std::endl;
	std::cin.get();
	return(0);
}



