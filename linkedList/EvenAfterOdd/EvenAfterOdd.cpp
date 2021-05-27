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

Node * evenAfterOdd(Node * head) {
	Node * oddHead = NULL;
	Node * oddTail = NULL;
	Node * evenHead = NULL;
	Node * evenTail = NULL;
	Node * temp = head;
	while(temp != NULL) {
		if(temp -> data % 2 == 0) {
			if(evenHead == NULL) {
				evenHead = temp;
				evenTail = temp;
			} else{
				evenTail -> next = temp;
				evenTail = temp;
			}
		} else {
			if(oddHead == NULL) {
				oddHead = temp;
				oddTail = temp;
			} else {
				oddTail -> next = temp;
				oddTail = temp;
			}
		}
		temp = temp -> next;
		if(temp == NULL) {
			if(oddHead == NULL) {
				evenTail -> next = NULL;
			} else if(evenHead == NULL) {
				oddTail -> next = NULL;
			} else {
				evenTail -> next = NULL;
				oddTail -> next = NULL;
			}
		}
	}
	if(oddHead == NULL) {
		return evenHead;
	} else if(evenHead == NULL) {
		return oddHead;
	}
	oddTail -> next = evenHead;
return oddHead;
}

int main() {
	Node * head = takeInput();
	head = evenAfterOdd(head);
	cout << "Final clubbed list is: ";
	printList(head);
return 0;
}
