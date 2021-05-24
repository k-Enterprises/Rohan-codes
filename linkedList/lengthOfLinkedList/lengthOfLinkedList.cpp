#include <iostream>
using namespace std;
#include "Node.cpp"

Node * takeInput() {
	int data;
	cout << "Enter the data: ";
	cin >> data;
	Node * head = NULL;
	Node * tail = NULL;
	while(data != -1) {
		Node * newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}else{
			tail -> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
return head;
}

int getSize(Node * head) {
	Node * temp = head;
	int count = 0;
	while(temp != NULL) {
		count ++;
		temp = temp -> next;
	}
return count;
}

int main() {
	Node * head = takeInput();
	cout << "Size of the linked list is : " << getSize(head) << endl;;
}
