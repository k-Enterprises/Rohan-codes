#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

void printTree(BinaryTreeNode<int> * root) {
	if(root == NULL) { // base case
		return;
	}
	cout << root -> data << ": ";
	if(root -> left != NULL) {
		cout << "L" << root -> left -> data << " ";
	}
	if(root -> right != NULL) {
		cout << "R" << root -> right -> data << " ";
	}
	cout << endl;
	printTree(root -> left);
	printTree(root -> right);
return;
}

BinaryTreeNode<int> * takeInput() {
	int rootData;
	cout << "Enter root data: ";
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> * leftChild = takeInput();
	BinaryTreeNode<int> * rightChild = takeInput();
	root -> left = leftChild;
	root -> right = rightChild;
return root;
}

void printTreeLevelWise(BinaryTreeNode<int> * root) {
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		cout << front -> data << ": ";
		if(front -> left != NULL) {
			cout << "L " << front -> left -> data << "  ";
			pendingNodes.push(front -> left);
		}
		if(front -> right != NULL) {
			cout << "R " << front -> right -> data << "  ";
			pendingNodes.push(front -> right);
		}
		cout << endl;
	}
return;
}

BinaryTreeNode<int> * takeInputLevelWise() {
	int rootData;
	cout << "Enter root data: ";
	cin >> rootData;
	if(rootData == -1) { // edge case
		return NULL;
	}
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		int leftChildData, rightChildData;
		cout << "Enter left child data of " << front -> data << ": ";
		cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftChildData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter right child data of " << front -> data << ": ";
		cin >> rightChildData;
		if(rightChildData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightChildData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

int main() {
	/*
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int> * node2 = new BinaryTreeNode<int>(3);
	root -> left = node1;
	root -> right = node2;
	*/
	BinaryTreeNode<int> * root = takeInputLevelWise();
	printTreeLevelWise(root);
	delete root;
return 0;
}
