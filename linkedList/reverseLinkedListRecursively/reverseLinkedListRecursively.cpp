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

Node * reverse(Node * head) {
	if(head == NULL || head -> next == NULL) {
		return head;
	}
	Node * smallOutput = reverse(head -> next);
	head -> next -> next = head;
	head -> next = NULL;
return smallOutput;
}

void printList(Node * head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}

int main() {
	Node * head = takeInput();
	head = reverse(head);
	cout << "Reversed list: ";
	printList(head);
return 0;
}
