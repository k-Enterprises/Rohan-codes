#include <iostream>
using namespace std;
#include "Node.cpp"
#include "Pair.cpp"

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

Pair reverse(Node * head) {
	if(head == NULL || head -> next == NULL) {
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}
	Pair smallAns = reverse(head -> next);
	smallAns.tail -> next = head;
	head -> next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
return ans;
}

Node * kReverse(Node * head, int k) {
	if(head == NULL || head -> next == NULL) {
		return head;
	}
	Node * h1 = head;
	Node * tail = head;
	for(int i = 0; i < k - 1; i ++) {
		if(tail -> next != NULL) {
			tail = tail -> next;
		}
	}
	Node * h2 = tail -> next;
	tail -> next = NULL;
	Pair r = reverse(h1);
	h1 = r.head;
	tail = r.tail;
	h2 = kReverse(h2 , k);
	tail -> next = h2;
return h1;

}

int main() {
	Node * head = takeInput();
	int k;
	cout << "Enter the value of k: ";
	cin >> k;
	head = kReverse(head, k);
	cout << "The final list after k-Reverse: ";
	printList(head);
return 0;
}
