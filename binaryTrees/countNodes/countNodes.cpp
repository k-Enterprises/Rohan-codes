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
		int leftChildData, rightChildData;
		cout << "Enter the value of left child of " << front -> data << ": ";
		cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftChildData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of right child of " << front -> data << ": ";
		cin >> rightChildData;
		if(rightChildData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightChildData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

int countNodes(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return 0;
	}
	int smallAns = countNodes(root -> left);
	int smallAns2 = countNodes(root -> right);
return smallAns + smallAns2 + 1;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int ans = countNodes(root);
	cout << "Number of nodes in the given binary tree is: " << ans << endl;
return 0;
}
