/*
Write a program that inputs string from the user and displays its length
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int length;
	
	cout<<"Enter your string: ";
	getline(cin,input);
	
	cout<<"String: "<<input<<endl;
	length = input.size();
	cout<<"Length of String: "<<length;
	return 0;
}
