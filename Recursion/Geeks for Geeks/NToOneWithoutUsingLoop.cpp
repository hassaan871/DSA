/*
Print N to 1 without loop.
*/

#include <iostream>
using namespace std;

void PrintInt(int n){
	if(n>=1){
		cout<<n<<" ";
		PrintInt(n-1);
	}
	
}

int main(){
	
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	PrintInt(n);
	
	return 0;
}
