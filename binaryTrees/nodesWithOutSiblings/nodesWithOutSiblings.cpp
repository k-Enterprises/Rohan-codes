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

void printNodesWithoutSiblings(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return;
	}
	if(root -> left != NULL && root -> right == NULL) {
		cout << root -> left -> data << " ";
	}
	if(root -> right != NULL && root -> left == NULL) {
		cout << root -> right -> data << " ";
	}
	printNodesWithoutSiblings(root -> left);
	printNodesWithoutSiblings(root -> right);
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	cout << "Nodes with no siblings are: ";
	printNodesWithoutSiblings(root);
	cout << endl;
return 0;
}
