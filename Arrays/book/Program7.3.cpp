#include <iostream>
using namespace std;
int main(){
	int arr[5], sum = 0;
	float avg = 0.0;
	for(int i=0; i<5; i++){
		cout<<"Enter value:";
		cin>>arr[i];
	}
	
//	sum
	for(int i=0; i<5; i++){
		sum += arr[i];
	}
	cout<<"Sum is "<<sum<<endl;
	
	avg = sum / 5.0;
	cout<<"Average is "<<avg;
	return 0;
}
