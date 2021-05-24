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

Node * deleteNode(int index, Node * head) {
	Node * temp = head;
	if(index == 0) {
		head = temp -> next;
		delete temp;
		return head;
	}
	int count = 0;
	while(count < index - 1 && temp != NULL) {
		temp = temp -> next;
		count ++;
	}
	if(temp != NULL) {
		Node * a = temp -> next;
		temp -> next = a -> next;
		delete a;
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

int main() {
	Node * head = takeInput();
	printList(head);
	int index;
	cout << "Enter the index of node you want to delete: ";
	cin >> index;
	head = deleteNode(index, head);
	printList(head);
return 0;
}
