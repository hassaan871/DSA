//Program to create a new linked list & store values into its nodes
#include <iostream>
using namespace std;

//Node Structure
struct Node {
	int data;
	Node* next;
};

//Create Node Function
Node* createNode(int data){
	Node* newNode = new Node(); // Allocate memory for a new Node on the heap and returns a pointer to that memory, not a reference.
	newNode->data = data; // Set the data for the new Node.
	newNode->next = nullptr; // Set the next pointer to nullptr.
	return newNode;	// Return the pointer to the new Node
}

int main(){
	
	return 0;
}
