//Write a program that declares a structure to store RollNo, Marks, Average and Grade of a student.
//The program should define a structure variable, inputs the values and then displays these values.

#include <iostream>
using namespace std;

struct Student{
	int rno, marks;
	float avg;
	char grade;
};

int main(){
	Student s;
	cout<<"Enter Rollno: ";
	cin>>s.rno;
	cout<<"Enter Marks: ";
	cin>>s.marks;
	cout<<"Enter avg: ";
	cin>>s.avg;
	cout<<"Enter grade: ";
	cin>>s.grade;
	
	cout<<"----------------------\n";
	cout<<"Roll No: "<<s.rno<<endl;
	cout<<"Marks: "<<s.marks<<endl;
	cout<<"Avg: "<<s.avg<<endl;
	cout<<"Grade: "<<s.grade<<endl;
	
	return 0;
}
