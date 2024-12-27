#include <iostream>
using namespace std;

int main(){
	int nums[] = {1,1,2,2,3,3,8,8,9,9};
	int size = sizeof(nums)/sizeof(nums[0]);
	bool isOdd = size%2;
	if(isOdd){
		for(int i=0; i<size; i=i+2){
			if(nums[i] == nums[i+1]){
				continue;
			}else{
				cout<<nums[i];
				return 0;
			}
		}	
	}else{
		cout<<"No single element";
	}
	
	return 0;
}
