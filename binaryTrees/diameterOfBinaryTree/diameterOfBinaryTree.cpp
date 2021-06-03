#include <iostream>
#include <queue>
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

int height(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return 0;
	}
	int leftHeight = height(root -> left);
	int rightHeight = height(root -> right);
return 1 + max(leftHeight, rightHeight);
}

int diameter(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return 0;
	}
	int option1 = height(root -> left) + height(root -> right);
	int option2 = diameter(root -> left);
	int option3 = diameter(root -> right);
return max(option1, max(option2, option3));
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int ans = diameter(root);
	cout << "Diameter of the binary tree is: " << ans << endl;
return 0;
}
