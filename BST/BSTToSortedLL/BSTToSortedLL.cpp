#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> * takeInput() {
	int rootData;
	cout << "Enter the root data: ";
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		int leftData, rightData;
		cout << "Enter the value of left child of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of right child of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

Pair<int> helper(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		Pair<int> ans;
		return ans;
	}
	Pair<int> left = helper(root -> left);
	Pair<int> right = helper(root -> right);
	Node<int> * rootNode = new Node<int>(root -> data);
	Pair<int> ans;
	if(left.tail != NULL) {
		left.tail -> next = rootNode;
	}
	rootNode -> next = right.head;
	if(left.head != NULL) {
		ans.head = left.head;
	} else {
		ans.head = rootNode;
	}
	if(right.tail != NULL) { 
		ans.tail = right.tail;
	} else {
		ans.tail = rootNode;
	}
return ans;
}

Node<int> * BSTToLL(BinaryTreeNode<int> * root) {
	Pair<int> ans = helper(root);
return ans.head;
}

void printList(Node<int> * head) {
	Node<int> * temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	Node<int> * head = BSTToLL(root);
	printList(head);
return 0;
}
