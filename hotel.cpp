#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int num_cases;
	int i;
		
	ifstream file;
	file.open("input.txt");
	
	file >> num_cases;

	for(i=0;i<num_cases;i++){
	
		int floor;
		int room;
		int hotel[100][100]={0};
		int garo,sero;
		int j,k;

		int num;

		file >> sero >> garo >> num;

		for(j=0;j<sero;j++){
			for(k=0;k<garo;k++){
				hotel[j][k] = (j+1)*100 + (k+1);

			}
			
		}

		room = num/sero;
		
		floor = num % sero;

		if(floor==0)
		{
			floor=sero;
			room--;
		}
		/*
		for(j=0;j<sero;j++){
			for(k=0;k<garo;k++){
				cout << hotel[j][k]<< " ";

			}
			cout << endl;
		}
		*/


		cout << hotel[floor-1][room] << endl;
		

	}file.close();
	return 0;
}
	