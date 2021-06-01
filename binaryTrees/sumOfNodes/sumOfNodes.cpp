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
		cout << "Enter the left child data of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the right child data of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

int sumOfNodes(BinaryTreeNode<int> * root) {
	if(root -> left == NULL && root -> right == NULL) {
		return root -> data;
	}
	int leftSum = 0, rightSum = 0;
	if(root -> left == NULL) {
		rightSum = sumOfNodes(root -> right);
	} else if(root -> right == NULL) {
		leftSum = sumOfNodes(root -> left);
	} else {
		leftSum = sumOfNodes(root -> left);
		rightSum = sumOfNodes(root -> right);
	}
return leftSum + rightSum + root -> data;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int ans = sumOfNodes(root);
	cout << "Sum of the nodes is: " << ans << endl;
return 0;
}
