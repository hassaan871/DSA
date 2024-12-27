#include <iostream>
using namespace std;

int main(){
	int m=4, n=4, target;
	int matrix[m][n] = {
		{1,3,5,7},
		{10,11,16,20},
		{23,30,34,60}
	};
	
	cout<<"Enter Target: ";
	cin>>target;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(target == matrix[i][j]){
				cout<<"Found Target: "<<matrix[i][j]<<endl;
				cout<<"True"<<endl;
				return 0;
			}
		}
	}
	return 0;
}
