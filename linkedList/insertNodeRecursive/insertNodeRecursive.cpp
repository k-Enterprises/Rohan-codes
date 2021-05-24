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

Node * insertNode(Node * head, int data, int index) {
	if(head == NULL) {
		return head;
	}
	if(index == 0) {
		Node * newNode = new Node(data);
		newNode -> next = head;
		head = newNode;
		return head;
	} else {
		Node * x = insertNode(head -> next, data, index - 1);
		head -> next = x;
		return head;
	}
}

int main() {
	Node * head = takeInput();
	printList(head);
	int data, index;
	cout << "Enter the element you want to insert: ";
	cin >> data;
	cout << "Enter the index you want to insert the element: ";
	cin >> index;
	head = insertNode(head, data, index);
	printList(head);
return 0;
}
