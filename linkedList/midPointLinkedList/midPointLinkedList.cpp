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

int getMid(Node * head) {
	Node * fast = head;
	Node * slow = head;
	while(fast -> next != NULL && fast -> next -> next != NULL) {
		fast = fast -> next -> next;
		slow = slow -> next;
	}
return slow -> data;
}

int main() {
	Node * head = takeInput();
	cout << "Mid node data value is: " << getMid(head) << endl;
return 0;
}
