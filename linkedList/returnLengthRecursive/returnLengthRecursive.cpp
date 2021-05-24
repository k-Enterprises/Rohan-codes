#include <iostream>
using namespace std;
#include "Node.cpp"

Node * takeInput() {
	int data;
	cout << "Enter data: ";
	cin >> data;
	Node * head = NULL;
	Node * tail = NULL;
	while(data != -1) {
		Node * newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		} else {
			tail -> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
return head;
}

void printList(Node * head) {
	Node * temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int getLength(Node * head) {
	Node * temp = head;
	if(temp == NULL) {
		return 0;
	}
	int smallOutput = getLength(head -> next);
return smallOutput + 1;
}

int main() {
	Node * head = takeInput();
	printList(head);
	cout << "Length of linked list is: " <<getLength(head) << endl;
return 0;
}
