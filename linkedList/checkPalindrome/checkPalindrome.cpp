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
	if(head == NULL) {
		return 0;
	}
	int smallAns = getLength(head -> next);
return smallAns + 1;
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

void printList(Node * head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}

bool checkPalindrome(Node * head) {
	int length = getLength(head);
	int half = length / 2;
	Node * temp = head;
	for(int i = 0; i < half; i ++) {
		temp = temp -> next;
	}
	Node * head2 = temp -> next;
	temp -> next = NULL;
	head2 = reverse(head2);
	while(head != NULL && head2 != NULL) {
		if(head -> data != head2 -> data) {
			return false;
		} else {
			head = head -> next;
			head2 = head2 -> next;
		}
	}
return true;
}

int main() {
	Node * head = takeInput();
	printList(head);
	bool ans = checkPalindrome(head);
	cout << ((ans)? "true" : "false") << endl;
return 0;
}
