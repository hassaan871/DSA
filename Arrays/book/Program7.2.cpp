//Write a program that inputs five integers from the user and stores them in an array. It then displays all the values in the array using loop

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int array[n];
	for(int i=0; i<n; i++){
		cout<<"Enter an integer:";
		cin>>array[i];
	}
	
	cout<<"The values in array are: "<<endl;
	for(int i=0; i<n; i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
