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

void deleteN(Node * head) {
	Node * temp = head;
	delete temp;
return;
}

Node * deleteNodes(Node * head, int m, int n) {
	if(head == NULL || head -> next == NULL || (m == 0 && n == 0)) {
		return head;
	}
	Node * temp = head;
	for(int i = 0; i < m - 1; i ++) {
		if(temp -> next != NULL) {
			temp = temp -> next;
		}
	}
	if(temp -> next != NULL) {
		Node * h1 = temp -> next;
		Node * tail = temp -> next;
		temp -> next = NULL;
		for(int i = 0; i < n - 1; i ++) {
			if(tail -> next != NULL) {
				tail = tail -> next;
			}
		}
		Node * h2 = tail -> next;
		tail -> next = NULL;
		deleteN(h1);
		h2 = deleteNodes(h2, m, n);
		temp -> next = h2;
	}
return head;
}

int main() {
	Node * head = takeInput();
	int m, n;
	cout << "Enter nodes to skip: ";
	cin >> m;
	cout << "Enter nodes to delete: ";
	cin >> n;
	head = deleteNodes(head, m ,n);
	cout << "Final linked list: ";
	printList(head);
return 0;
}
