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
	Node * temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

Node * deleteNode(Node * head, int index) {
	if(head == NULL) {
		return head;
	}
	if(index == 0) {
		Node * temp = head;
		head = head -> next;
		delete temp;
		return head;
	} else {
		Node * x = deleteNode(head -> next, index - 1);
		head -> next = x;
		return head;
	}
}

int main() {
	Node * head = takeInput();
	printList(head);
	int index;
	cout << "Enter the index of node you want to delete: ";
	cin >> index;
	head = deleteNode(head, index);
	printList(head);
return 0;
}
