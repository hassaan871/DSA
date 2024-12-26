/*
Print 1 to n without using loops.
*/

#include <iostream>
using namespace std;

void PrintInt(int n){
	if(n>=1){
		PrintInt(n-1);
		cout<<n<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	PrintInt(n);
	
	return 0;
}
