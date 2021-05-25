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

int getLength(Node * head) {
	if(head == NULL) {
		return 0;
	}
	int smallAns = getLength(head -> next);
return smallAns + 1;
}

Node * appendLastNToFirst(Node * head, int n) {
	int length = getLength(head);
	int counter = length - n;
	if(counter == 0) {
		return head;
	}
	Node * current = head;
	for(int i = 0; i < counter - 1; i ++) {
		current = current -> next;
	}
	Node * head2 = current -> next;
	current -> next = NULL;
	Node * temp = head2;
	while (temp -> next != NULL) {
		temp = temp -> next;
	}
	temp -> next = head;
	return head2;
}

int main() {
	Node * head = takeInput();
	printList(head);
	int n;
	cout << "Enter the value for n: ";
	cin >> n;
	head = appendLastNToFirst(head, n);
	printList(head);
return 0;
}
