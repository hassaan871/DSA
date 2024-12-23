#include <iostream>
using namespace std;

int BinarySearch(int target, int arr[10]){
	for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
		if(target == arr[i]){
//			cout<<arr[i];
			return arr[i];
		}
	}
	return -1;
}
int main(){
	//array sorted in assending order
	int arr[10] = {1,3,4,5,7,8,9,11,14,15};
	
	//integer target to be searched
	int target;
	cout<<"Enter Target Element: ";
	cin>>target;
	
//	for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
//		if(target == arr[i]){
//			cout<<arr[i];
//			return arr[i];
//		}
//	}

	int result = BinarySearch(target, arr);
	cout<<result;
	
	return -1;
}
