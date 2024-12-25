#include <iostream>
using namespace std;
int main(){
	int n=6;
	int nums[n] = {2,0,2,1,1,0};	//	red: 0, white: 1, blue: 2
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(nums[i]>nums[j]){
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<nums[i]<<"\t";
	}
	return 0;
}
