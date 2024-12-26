#include <iostream>
using namespace std;
int main(){
	int n=5;
	int numbers[n], square[n], cubes[n], sums[n], total=0;
	
//	number array stores the values of its indexes
	cout<<"numbers:\t";
	for(int i=0; i<n; i++){
		numbers[i] = i;
		cout<<numbers[i]<<"\t";
	}
	cout<<endl;
	
//	square array stores the squares of its indexes
	cout<<"squares:\t";
	for(int i=0; i<n; i++){
		square[i] = i*i;
		cout<<square[i]<<"\t";
	}
	cout<<endl;
	
//	cube array stores the cube of its indexes
	cout<<"cubes:\t";
	for(int i=0; i<n; i++){
		cubes[i] = i*i*i;
		cout<<cubes[i]<<"\t";
	}
	cout<<endl;
	
//	sum array stores the sum of corresponding indexes of three arrays
	cout<<"sums:\t";
	for(int i=0; i<n; i++){
		sums[i] =  numbers[i] + square[i] + cubes[i];
		total += sums[i];
		cout<<sums[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"Grand total:"<<total;
	
	return 0;
}
