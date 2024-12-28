#include <iostream>
using namespace std;

struct student{
	int rollno;
	int marks[5];
};

int main(){
	student aman;
	float avg=0;
	cout<<"Enter Aman's Rollno: ";
	cin>>aman.rollno;
	for(int i=0; i<5; i++){
		cout<<"Enter marks of Sub#"<<i+1<<": ";
		cin>>aman.marks[i];
	}
	for(int i=0; i<5; i++){
		avg = avg + aman.marks[i];
	}
	avg = avg/5.0;
	cout<<"--------------------------------"<<endl;
	cout<<"Aman's Rollno: "<<aman.rollno<<endl;
	for(int i=0; i<5; i++){
		cout<<"Marks Sub#"<<i<<" = "<<aman.marks[i]<<endl;
	}
	cout<<"AVG = "<<avg<<endl;
	return 0;
}
