#include <iostream>
using namespace std;

int main(){
	int n = 4;
	int nums[n+1] = {1,2,3,4,4};
	
	for(int i=0; i<n+1; i++){
		for(int j=0; j<n+1; j++){
			if(i == j){
				break;
			}
			if(nums[i]==nums[j]){
				cout<<nums[i]<<endl;
				return 1;
			}		
		}
	}
	
	return 0;
}
