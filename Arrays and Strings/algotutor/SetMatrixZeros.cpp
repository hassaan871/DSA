#include <iostream>
using namespace std;

int main(){
	int m=3,n = 3;
	int matrix[m][n]={
		{1,1,1},
		{1,0,1},
		{1,1,1}
	};
	
	int result[m][n] = {
		{1,1,1},
		{1,1,1},
		{1,1,1}
	};
	
//	If an element is 0, set its entire row and column to 0's.
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(matrix[i][j] == 0){
				result[i][j] = 0;
				for(int colInc=j+1; colInc<n; colInc++){
					result[i][colInc] = 0;
				}
				for(int colDec=j-1; colDec>=0; colDec--){
					result[i][colDec] = 0;
				}
				for(int rowInc=i+1; rowInc<n; rowInc++){
					result[rowInc][j] = 0;
				}
				for(int rowDec=i-1; rowDec>=0; rowDec--){
					result[rowDec][j] = 0;
				}
			}
		}
	}
	cout<<"Input: \n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Output: \n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<result[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
