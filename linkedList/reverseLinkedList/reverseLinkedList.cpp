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
		} else  {
			tail -> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
return head;
}

Node * reverse(Node * head) {
	Node * prev = NULL;
	Node * current = head;
	Node * next = NULL;
	while(current != NULL) {
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
return prev;
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
	head = reverse(head);
	cout << "Reversed linked list: ";
	printList(head);
return 0;
}
