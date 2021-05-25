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

int findNode(Node * head, int x) {
	if(head == NULL) {
		return -1;
	}
	int smallAns;
	if(head -> data == x) {
		return 0;
	} else {
		smallAns = findNode(head -> next, x);
	}
	if(smallAns != -1) {
		return smallAns + 1;
	}
return -1;
}

int main() {
	Node * head = takeInput();
	printList(head);
	int x;
	cout << "Enter the element you want to find: ";
	cin >> x;
	cout << "The element is present at index: " << findNode(head, x) << endl;
return 0;
}
