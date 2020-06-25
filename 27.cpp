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
	
		int row,col;
		int M[101][101]={0};
		int num;

		file >> row >> col;

		for(j=0;j<row;j++){
	
			for(k=0;k<col;k++){
				
				file >> num;

				M[j][k] += num;
			}
		}

		for(j=0;j<row;j++){
	
			for(k=0;k<col;k++){
				
				file >> num;

				M[j][k] += num;

				cout << M[j][k] << " ";
			}
			cout << endl;

		}





	}file.close();
	return 0;
}
	