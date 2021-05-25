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
		} else {
			tail -> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
return head;
}

void printList(Node * head) {
	if(head -> next == NULL) {
		cout << head -> data << " ";
		return;
	}
	printList(head -> next);
	cout << head -> data << " ";
return;
}

int main() {
	Node * head = takeInput();
	cout << "Reversed list: ";
	printList(head);
	cout << endl;
}
