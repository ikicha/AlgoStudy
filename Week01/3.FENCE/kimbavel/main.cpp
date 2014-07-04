#include <iostream>
#include <stdlib.h>

using namespace std;

#define CASEMAX		50
#define FENCEMAX	20000
#define HEIGHTMAX	10000

int main(void){
	int case_number;
	int fence_number;
	
	cin >> case_number;
	for( int i=0; i<case_number; i++){
		char number_flags[HEIGHTMAX+1]={0};

		cin >> fence_number;
		short *fences = new short[fence_number];
		for( int j=0; j<fence_number; j++){
			cin >> fences[j];
			number_flags[fences[j]] = 1;
		}

		//Start Algorithm
		int max_value = 0;
		for( int j=0; j<HEIGHTMAX+1; j++){
			if(number_flags[j] == 0) continue;
			int maximum = 0;
			for( int k=0; k<fence_number; k++){
				if(fences[k] >= j){
					maximum += j;
					max_value = max(max_value, maximum);
				}
				else{
					max_value = max(max_value, maximum);
					maximum = 0;
				}
			}
		}

		//End Algorithm
		//Output
		cout << max_value << endl;
		delete []fences;
	}
	return 0;
}
