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

Node * reverse(Node * head) {
	Node * current = head;
	Node * prev = NULL;
	Node * next = NULL;
	while(current != NULL) {
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
return prev;
}

int getLastNthNode(Node * head, int n) {
	head = reverse(head);
	Node * temp = head;
	for(int i = 0; i < n; i ++) {
		temp = temp -> next;
	}
return temp -> data;
}

int main() {
	Node * head = takeInput();
	int n;
	cout << "Enter the index: ";
	cin >> n;
	cout << "Nth node from last is: " << getLastNthNode(head, n) << endl;
return 0;
}
