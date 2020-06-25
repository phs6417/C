#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num_cases;
	int i,j,k,l;
		
	ifstream file;
	file.open("input.txt");
	
	file >> num_cases;

	for(i=0;i<num_cases;i++){
	
		int row,center,col;
		int M1[101][101]={0};
		int M2[101][101]={0};
		int result[101][101]={0};
		int num;

		file >> row >> center >> col;

		for(j=0;j<row;j++){
	
			for(k=0;k<center;k++){
				
				file >> num;

				M1[j][k] = num;

			}
		}

		for(j=0;j<center;j++){
		
			for(k=0;k<col;k++){
			
				file >> num;
		
				M2[j][k] = num;

			}
		}

		for(j=0;j<row;j++){

			for(k=0;k<col;k++){

				for(l=0;l<center;l++){

					result[j][k] += M1[j][l]* M2[l][k];			

				}

			cout<< result[j][k] << " ";

			}

		cout << endl;

		}
			
					
	


	}file.close();
	return 0;
}
	