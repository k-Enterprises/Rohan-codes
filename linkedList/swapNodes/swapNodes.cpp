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

Node * swap(Node * head, int index1, int index2) {
	if(index1 == index2) {
		return head;
	}
	Node * currentNode = head;
	Node * prev = NULL;
	Node * c1 = NULL, * c2 = NULL, * p1 = NULL, * p2 = NULL;
	// figuring out the value of p1, c1 and p2, c2
	int i = 0;
	while(currentNode != NULL) {
		if(i == index1) {
			p1 = prev;
			c1 = currentNode;
		} else if(i == index2) {
			p2 = prev;
			c2 = currentNode;
		}
		prev = currentNode;
		currentNode = currentNode -> next;
		i ++;
	}
	if(p1 != NULL) { // so the element is not head element
		p1 -> next = c2;
	} else { // element was head element
		head = c2;
	}
	if(p2 != NULL) { // taking mesures to achieve associativity
		p2 -> next = c1;
	} else {
		head = c1;
	}
	// main next pointer swaping
	Node * temp = c2 -> next;
	c2 -> next = c1 -> next;
	c1 -> next = temp;
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
	int i, j;
	cout << "Enter the indexes of two nodes you want to swap: ";
	cin >> i >> j;
	head = swap(head, i, j);
	printList(head);
return 0;
}
