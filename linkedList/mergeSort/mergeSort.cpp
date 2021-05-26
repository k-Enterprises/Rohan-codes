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

Node * getMid(Node * head) {
	Node * slow = head;
	Node * fast = head;
	while(fast -> next != NULL && fast -> next -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}
return slow;
}

Node * merge(Node * head1, Node * head2) {
	Node * h1 = head1;
	Node * h2 = head2;
	Node * head = NULL;
	Node * tail = NULL;
	while(h1 != NULL && h2 != NULL) {
		if(h1 -> data <= h2 -> data) {
			Node * newNode = new Node(h1 -> data);
			if(head == NULL) {
				head = newNode;
				tail = newNode;
			} else {
				tail -> next = newNode;
				tail = newNode;
			}
			h1 = h1 -> next;
		} else {
			Node * newNode = new Node(h2 -> data);
			if(head == NULL) {
				head = newNode;
				tail = newNode;
			} else {
				tail -> next = newNode;
				tail = newNode;
			}
			h2 = h2 -> next;
		}
	}
	while(h1 != NULL) {
		Node * newNode = new Node(h1 -> data);
		tail -> next = newNode;
		tail = newNode;
		h1 = h1 -> next;
	}
	while(h2 != NULL) {
		Node * newNode = new Node(h2 -> data);
		tail -> next = newNode;
		tail = newNode;
		h2 = h2 -> next;
	}
return head;
}

Node * mergeSort(Node * head) {
	if(head -> next == NULL) {
		return head;
	}
	Node * mid = getMid(head);
	Node * head2 = mid -> next;
	mid -> next = NULL;
	head = mergeSort(head);
	head2 = mergeSort(head2);
	head = merge(head, head2);
return head;
}

int main() {
	Node * head = takeInput();
	head = mergeSort(head);
	cout << "Sorted linked list: ";
	printList(head);
return 0;
}
