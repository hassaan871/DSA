#include <iostream>
using namespace std;
int main(){
//	Sorted array of distinct integers
	int arr[10] = {0, 2, 3, 5, 6, 7, 8, 9, 11, 18};
	
//	Target value
	int target;
	
	cout<<"Enter Target value:";
	cin>>target;
	
//	Size of array
	int size = sizeof(arr)/sizeof(arr[0]);
	
//	return the index if the target is found
	for(int i=0; i<size; i++){
		if(arr[i] == target){
			cout<<"Target found, Index: "<<i<<endl;
			return 0;
		}
	}
	
	cout<<"Target NOT Found"<<endl;
	
//	return the index there would be if it were inserted in order
	for(int i=0; i<size; i++){
		for(int j=1; j<size; j++){
			if(arr[i]<target && arr[j]>target){
				cout<<"Target will be inserted at Index:"<<j;
				return 0;
			}
		}
	}
	 
	return 0;
}
