/*
Write a program that inputs current day and month from the user.
It then calculates and displays the total number of days in the current year till the entered date.
*/

#include <iostream>
using namespace std;
int main(){
	int currentDay, currentMonth, total=0;
	cout<<"Enter current day: ";
	cin>>currentDay;
	cout<<"Enter current month: ";
	cin>>currentMonth;
	
	int year[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
	
	for(int i=0; i<currentMonth-1; i++){
		total+=year[i];
	}
	
	total = total+currentDay;
	cout<<"The number of days in this year till date = "<<total;
	
	return 0;
}
