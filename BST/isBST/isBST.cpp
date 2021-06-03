#include <iostream>
#include <queue>
#include <climits>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> * takeInput() {
	int rootData;
	cout << "Enter root data: ";
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

bool helper(BinaryTreeNode<int> * root, int min, int max) {
	if(root == NULL) {
		return true;
	}
	if(root -> data < min || root -> data > max) {
		return false;
	}
	bool left = helper(root -> left, min, root -> data);
	bool right = helper(root -> right, root -> data, max);
return (left && right);
}

bool isBST(BinaryTreeNode<int> * root) {
	bool ans = helper(root, INT_MIN, INT_MAX);
return ans;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	bool ans = isBST(root);
	cout << ((ans) ? "Given tree is a BST" : "Given tree is not a BST") << endl;
return 0;
}
