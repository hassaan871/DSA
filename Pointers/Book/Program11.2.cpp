//Write a program to input five integers in an array and display them using a pointer.
#include <iostream>
using namespace std;

int main(){
	int arr[5];
	int *ptr;
	for(int i=0; i<5; i++){
		cout<<"Enter int # 0"<<i+1<<": ";
		cin>>arr[i];
	}
	ptr = arr;
	cout<<"You entered the following values: \n";
	for(int i=0; i<5; i++){
		cout<<*ptr++<<"\t";	
	}
	
	return 0;
}
