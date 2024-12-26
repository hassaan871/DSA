/*
Mean of array using recursion.
*/

#include <iostream>
using namespace std;

int SumOfArray(int arr[], int n){
	if(n>=0){
		arr[n-1] = arr[n-1]+arr[n];
		SumOfArray(arr, n-1);
	}else{
		return arr[0];
	}
}


int main(){
	
	float mean = 0.0;
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int arr[n];
	cout<<"Input Array: \n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int sum = SumOfArray(arr, n-1);
	mean = sum / n;
	cout<<"Mean: "<<mean;
	return 0;
}
