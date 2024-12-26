#include <iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"Enter the number of persons required ";
	cin>>n;
	
	int ages[n];
	
	cout<<"Enter ages of "<<n<<" persons"<<endl;
	
	for(int i=0; i<n; i++){
		cin>>ages[i];
	}
	
	for(int i=0; i<n; i++){
		if(ages[i]>=50 && ages[i]<=60){
			count++;
		}
	}
	
	cout<<count<<" persons are between 50 and 60"<<endl;
	return 0;
}
