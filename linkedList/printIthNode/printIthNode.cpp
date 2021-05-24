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

void printIthNode(int index, Node * head) {
	Node * temp = head;
	int i = 0, ans;
	while(temp != NULL && i <= index) {
		ans = temp -> data;
		temp = temp -> next;
		if(temp == NULL) {
			cout << "There is no node present at: " << index << endl;
			return;
		}
		i ++;
	}
	cout << "The element at ith node is: " << ans << endl;
}

int main() {
	Node * head = takeInput();
	int i;
	cout << "Enter which node you want to print: ";
	cin >> i;
	printIthNode(i, head);
return 0;
}
