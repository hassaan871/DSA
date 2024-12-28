//Write a program to input five integers in an array and display them using a pointer.
#include <iostream>
using namespace std;

int main(){
	float arr[5];
	float *ptr;
	
	cout<<"Enter five marks: "<<endl;
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	ptr = arr;
	ptr = ptr+4;
//	cout<<"Testing: "<<*ptr<<endl;

	cout<<"The values in reverse order "<<endl;
	
	for(int i=1; i<=5; i++){
		cout<<*ptr--<<endl;
	}

	return 0;
}
