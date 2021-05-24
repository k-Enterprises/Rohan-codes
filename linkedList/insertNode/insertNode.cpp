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

Node * insertNode(int index, int data, Node * head) { // for inserting index is = 0 so return updated head
	Node * temp = head;
	Node * newNode = new Node(data);
	int count = 0;
	if(index == 0) {
		newNode -> next = temp;
		head = newNode;
		return head; // returning updated head
	}
	while(count < index - 1 && temp != NULL) { // to get the address of the indexed node 
		temp = temp -> next;
		count ++;
	}
	if(temp != NULL) { // if it exeeds the length then we don't have to do anything
		newNode -> next = temp -> next;
		temp -> next = newNode;
	}
return head; // returning the same head as passed
}

int main() {
	Node * head = takeInput();
	printList(head);
	int data, index;
	cout << "Enter the data you want to insert: ";
	cin >> data;
	cout << "Enter the index at which you want to add data: ";
	cin >> index;
	head = insertNode(index, data, head);
	printList(head);
return 0;
}
