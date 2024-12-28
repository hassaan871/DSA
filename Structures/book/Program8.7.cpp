#include <iostream>
using namespace std;

struct Student{
	int marks;
	char grade;
};
int main(){
	Student abdan;
	cout<<"Enter marks: ";
	cin>>abdan.marks;
	cout<<"Enter Grade: ";
	cin>>abdan.grade;
	
	Student qasim = abdan;
	cout<<"The first record is as follows: \n";
	cout<<"Marks: "<<abdan.marks<<"\n"<<"Grade: "<<abdan.grade<<endl;
	cout<<"The second record is as follows: \n";
	cout<<"Marks: "<<qasim.marks<<"\n"<<"Grade: "<<qasim.grade<<endl;
	
	return 0;
}
