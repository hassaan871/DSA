#include <iostream>
using namespace std;
int main(){
	
	int target, n=0, output[2] = {-1,-1}, nums[6] = {5,7,7,8,8,10};
	
	cout<<"target = ";
	cin>>target;
	
	for(int i=0; i<6; i++){
		if(nums[i] == target){
			output[n]=i;
			if(n==0){n=1;}
		}
	}
	
	cout<<"Output: ["<<output[0]<<","<<output[1]<<"]";
	return 0;
}
