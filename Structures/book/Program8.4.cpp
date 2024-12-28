#include <iostream>
using namespace std;

struct Employe{
	int id;
	int salary;
};
int main(){
	Employe e1 = {63, 85000};
	cout<<"Employe Id: "<<e1.id<<endl;
	cout<<"Employe Salary: "<<e1.salary<<endl;
	return 0;
}
