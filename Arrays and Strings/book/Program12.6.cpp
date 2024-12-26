/*
Write a program that inputs a string from the user and then copies it to another string.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string input, copy;
	
	cout<<"Enter string: ";
	getline(cin,input);
	
	copy = input;
	cout<<copy;
	
	return 0;
}
