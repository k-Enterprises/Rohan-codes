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

int getLength(Node * head) {
	if(head  == NULL) {
		return 0;
	}
	int smallAns = getLength(head -> next);
return smallAns + 1;
}

Node * bubbleSort(Node * head) {
	int length = getLength(head);
	for(int i = 0; i < length - 1; i ++) {
		Node * prev = NULL, * current = head, * next = current -> next;
		while(next != NULL) {
			if(current -> data > next -> data) {
				if(prev != NULL) {
					prev -> next = next;
					current -> next = next -> next;
					next -> next = current;
					prev = next;
					next = current -> next;
				} else {
					head = next;
					current -> next = next -> next;
					next -> next = current;
					prev = next;
					next = current -> next;
				}
			} else {
				prev = current;
				current = current -> next;
				next = current -> next;
			}
		}
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
	head = bubbleSort(head);
	cout << "Sorted Linked List: ";
	printList(head);
return 0;
}
