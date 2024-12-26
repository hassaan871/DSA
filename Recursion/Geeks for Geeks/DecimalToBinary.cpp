//Decimal to binary using recursion.

#include <iostream>
using namespace std;

void DecimalToBinary(int decimal){
	if(decimal != 1 && decimal != 0){
		DecimalToBinary(decimal/2);
		cout<<decimal%2;
	}else if(decimal == 0){
		cout<<0;
	}else{
		cout<<1;
	}
	
}

int main(){
	int decimal;
	cout<<"Enter Decimal: ";
	cin>>decimal;
	
	DecimalToBinary(decimal);
	
	return 0;
}
