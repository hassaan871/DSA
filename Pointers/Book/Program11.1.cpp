#include <iostream>
using namespace std;

int main(){
	int n, *ptr;
	cout<<"Enter integer: ";
	cin>>n;
	ptr=&n;
	
	cout<<"Value: "<<n<<endl;
	cout<<"Address: "<<ptr<<endl;
	return 0;
}
