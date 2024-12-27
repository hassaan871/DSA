//pow(x,n) - x raised to the power of n.
#include <iostream>
using namespace std;

int pow(int x, int n){
	int result = 1;
	for(int i=1; i<=n; i++){
		result = result*x;
//		cout<<"Result: "<<i<<" "<<result<<endl;
	}	
	return result;
}

int main(){
	
	int x,n,result;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter n: ";
	cin>>n;
	
	result = pow(x,n);
	cout<<"Output: "<<result<<endl;	
	return 0;
}
