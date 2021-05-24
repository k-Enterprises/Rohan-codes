#include <iostream>
using namespace std;
#include "Node.cpp"

Node * takeInput() {
	int data;
	cout << "Enter data for first node: ";
	cin >> data;
	Node * head = NULL;
	while(data != -1) {
		Node * newNode = new Node(data);
		if(head == NULL){
			head = newNode;
		}
		else {
			Node * temp = head;
			while(temp -> next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
		}
		cin >> data;
	}
return head;
}

void printList(Node * head) {
	Node * temp = head; // always create a temp in case of linked list so that we don't loose head
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int main() {
	Node * head = takeInput();
	printList(head);
	// statically 
	/*Node n1(1);
	Node * head = & n1;
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	n1.next = & n2;
	n2.next = & n3;
	n3.next = & n4;
	n4.next = & n5;
	cout << "Linked List 1: ";
	printList(head);
	cout << n1.data << endl;
	cout << n2.data << endl;
	cout << "Head: " <<head << endl;
	cout << "Address of n1: " <<&n1 << endl;
	cout << head -> data << endl;*/

	//dynamically 
	Node * n6 = new Node(6);
	Node * head2 = n6;
	Node * n7 = new Node(7);
	Node * n8 = new Node(8);
	Node * n9 = new Node(9);
	Node * n10 = new Node(10);
	n6 -> next = n7;
	n7 -> next = n8;
	n8 -> next = n9;
	n9 -> next = n10;
	cout << "Dynamic Node Linked list: ";
	printList(head2);
return 0;
}
