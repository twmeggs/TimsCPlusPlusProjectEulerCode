

// horrible yucky code to solve Project Euler problem 11

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <string>

int main()
{
       const char filename[] = "grid.txt";
       std::ifstream input( filename );
       if(!input) {
              std::cout << "could not open file";
              std::exit(1);
       }
		
	   std::vector<std::vector<int>> matrix; 

       double num;
       std::string line;
       int row = 0;
       while( std::getline( input, line ) ) {
              matrix.push_back(std::vector<int>());
              std::stringstream lineAsStream( line );
              int num;
              while( !lineAsStream.eof() ) {
                     lineAsStream >> num;
                     matrix[row].push_back(num);
              }
              ++row;
       }

	   int maxLRProduct = 0;
		for(int i=0; i <=19; i++){
			for(int j=0; j<=16; j++){
				int tmp_product = matrix[i][j] * matrix[i][j+1] * matrix[i][j+2] * matrix[i][j+3];
				if(tmp_product > maxLRProduct) maxLRProduct = tmp_product;
				tmp_product = 0;
			}

		}

		int myMax = maxLRProduct;

		int maxUDProduct = 0;
		for(int i=0; i <=16; i++){
			for(int j=0; j<=19; j++){
				int tmp_product = matrix[i][j] * matrix[i+1][j] * matrix[i+2][j] * matrix[i+3][j];
				if(tmp_product > maxUDProduct) maxUDProduct = tmp_product;
				tmp_product = 0;
			}

		}

		if(maxUDProduct > myMax) myMax = maxUDProduct;

		int maxDiagUDLR = 0;
		for(int i=0; i <=16; i++){
			for(int j=0; j<=16; j++){
				int tmp_product = matrix[i][j] * matrix[i+1][j+1] * matrix[i+2][j+2] * matrix[i+3][j+3];
				if(tmp_product > maxDiagUDLR) maxDiagUDLR = tmp_product;
				tmp_product = 0;
			}

		}

		if(maxDiagUDLR > myMax) myMax = maxDiagUDLR;

		int maxDiagUDRL = 0;
		for(int i=0; i <= 16; i++){
			for(int j=19; j >= 3; j--){
				int tmp_product = matrix[i][j] * matrix[i+1][j-1] * matrix[i+2][j-2] * matrix[i+3][j-3];
				if(tmp_product > maxDiagUDRL) maxDiagUDRL = tmp_product;
				tmp_product = 0;
			}

		}

		if(maxDiagUDRL > myMax) myMax = maxDiagUDRL;

		int maxDiagDULR = 0;
		for(int i=19; i >= 3; i--){
			for(int j=0; j <=16; j++){
				int tmp_product = matrix[i][j] * matrix[i-1][j+1] * matrix[i-2][j+2] * matrix[i-3][j+3];
				if(tmp_product > maxDiagDULR) maxDiagDULR = tmp_product;
				tmp_product = 0;
			}

		}

		if(maxDiagDULR > myMax) myMax = maxDiagDULR;

		int maxDiagDURL = 0;
		for(int i=19; i >= 3; i--){
			for(int j=19; j >=3; j--){
				int tmp_product = matrix[i][j] * matrix[i-1][j-1] * matrix[i-2][j-2] * matrix[i-3][j-3];
				if(tmp_product > maxDiagDURL) maxDiagDURL = tmp_product;
				tmp_product = 0;
			}

		}

		if(maxDiagDURL > myMax) myMax = maxDiagDURL;

		std::cout << myMax << std::endl;
		std::cin.get();
       return 0;
}





