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
		cout << "Enter the value of the left child of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of the right child of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

void printRange(BinaryTreeNode<int> * root, int min, int max) {
	if(root == NULL) {
		return;
	}
	if(root -> data >= min && root -> data <= max) {
	 	printRange(root -> left, min, max);
		cout << root -> data << " ";
		printRange(root -> right, min, max);
	} else if(root -> data < min) {
		printRange(root -> right, min, max);
	} else {
		printRange(root -> left, min, max);
	}
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int min, max;
	cout << "Enter minimum of the range: ";
	cin >> min;
	cout << "Enter maximum of the range: ";
	cin >> max;
	cout << "Element in range " << min << " - " << max << " are: ";
	printRange(root, min , max);
	cout << endl;
	delete root;
return 0;
}
