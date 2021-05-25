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

Node * removeDuplicates(Node * head) {
	if(head -> next == NULL) {
		return head;
	}
	Node * x = removeDuplicates(head -> next);
	if(head -> data == x -> data) {
		head -> next = x -> next;
		delete x;
	}
return head;
}

int main() {
	Node * head = takeInput();
	cout << "Original List: ";
	printList(head);
	head = removeDuplicates(head);
	cout << "Removed duplicates list: ";
	printList(head);
return 0;
}
