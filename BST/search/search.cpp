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

BinaryTreeNode<int> * search(BinaryTreeNode<int> * root, int x) {
	if(root == NULL) {
		return NULL;
	}
	if(root -> data == x) {
		return root;
	}
	BinaryTreeNode<int> * ans = NULL;
	if(root -> data > x) {
		ans = search(root -> left, x);
	} else {
		ans = search(root -> right, x);
	}
return ans;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int x;
	cout << "Enter the element you want to search in tree: ";
	cin >> x;
	BinaryTreeNode<int> * ans = search(root, x);
	if(ans == NULL) {
		cout << "The element is not present in the tree" << endl;
	} else {
		cout << "The element is present in the tree" << endl;
	}
return 0;
}
