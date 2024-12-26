#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(const string &s){
	
	int length = 0, stringSize = s.size();
	for(int i=stringSize-1; i>=0; i--){
		if(s[i] != ' '){
			length++;
		}else{
			return length;
		}
	}
	
	return length;
}

int main(){
	
	string str = "Hello World";
//	cout<<str[0];
	int length = lengthOfLastWord(str);
	cout<<"Length of last string "<<length<<endl;
	
	return 0;
}
