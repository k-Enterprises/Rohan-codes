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

Node * merge(Node * head1, Node * head2) {
	Node * temp1 = head1;
	Node * temp2 = head2;
	Node * head = NULL;
	Node * tail = NULL;
	while(temp1 != NULL && temp2 != NULL) {
		if(temp1 -> data <= temp2 -> data) {
			Node * newNode = new Node(temp1 -> data);
			if(head == NULL) {
				head = newNode;
				tail = newNode;
			} else {
				tail -> next = newNode;
				tail = newNode;
			}
			temp1 = temp1 -> next;
		} else {
			Node * newNode = new Node(temp2 -> data);
			if(head == NULL) {
				head = newNode;
				tail = newNode;
			} else {
				tail -> next = newNode;
				tail = newNode;
			}
			temp2 = temp2 -> next;
		}
	}
	while(temp1 != NULL) {
		Node * newNode = new Node(temp1 -> data);
		tail -> next = newNode;
		tail = newNode;
		temp1 = temp1 -> next;
	}
	while(temp2 != NULL) {
		Node * newNode = new Node(temp2 -> data);
		tail -> next = newNode;
		tail = newNode;
		temp2 = temp2 -> next;
	}
return head;
}

int main() {
	cout << "Linked List 1: " << endl;
	Node * head1 = takeInput();
	cout << "Linked List 2: " << endl;
	Node * head2 = takeInput();
	Node * head3 = merge(head1, head2);
	cout << "Final Linked List: ";
	printList(head3);
return 0;
}
