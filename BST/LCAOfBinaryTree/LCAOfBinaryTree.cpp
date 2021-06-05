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

int LCA(BinaryTreeNode<int> * root, int n1, int n2) {
	if(root == NULL) {
		return -1;
	}
	if(root -> data == n1 || root -> data == n2) {
		return root -> data;
	}
	int leftAns = LCA(root -> left, n1, n2);
	int rightAns = LCA(root -> right, n1, n2);
	if(leftAns == -1 && rightAns == -1) {
		return -1;
	}else if(leftAns == -1) {
		return rightAns;
	}else if(rightAns == -1) {
		return leftAns;
	} else {
		return root -> data;
	}
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int n1, n2;
	cout << "Enter the node data 1: ";
	cin >> n1;
	cout << "Enter the node data 2: ";
	cin >> n2;
	int ancesstor = LCA(root, n1, n2);
	cout << "LCA for the given tree and nodes is: " << ancesstor << endl;
return 0;
}
