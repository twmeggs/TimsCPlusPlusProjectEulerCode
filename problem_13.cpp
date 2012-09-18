
// some code to solve Project Euler problem 13

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <string>
#include <ttmath.h>


int main()
{
    
	// using a big number library, define my big number holders and a loop variable
	ttmath::Int<1000> miNumber, miBucket = 0;
	int i = 0;

	// open file and check is ok
	 const char filename[] = "grid.txt";
       std::ifstream input( filename );
       if(!input) {
              std::cout << "could not open file";
              std::exit(1);
       }
		
	// extract each line and add to total
       std::string line;
       while( i < 100 ) {
				std::getline( input, line);
				miNumber = line;
				miBucket = miBucket + miNumber;
			  i++;
	   }

	// print to screen
		std::cout << miBucket;
		std::cin.get();
	   return(0);
}