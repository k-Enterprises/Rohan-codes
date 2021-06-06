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

Pair<int> helper(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		Pair<int> ans;
		ans.height = 0;
		ans.isBST = true;
		ans.min = INT_MAX;
		ans.max = INT_MIN;
		return ans;
	}
	Pair<int> left = helper(root -> left);
	Pair<int> right = helper(root -> right);
	if(root -> data > left.max && root -> data < right.min) {
		Pair<int> ans;
		if(left.isBST && right.isBST) {
			ans.isBST = true;
			ans.height = max(left.height, right.height) + 1;
		} else {
			ans.isBST = false;
			ans.height = max(left.height, right.height);
		}
		if(root -> left == NULL && root -> right == NULL) {
			ans.min = root -> data;
			ans.max = root -> data;
		} else {
			ans.min = min(left.min, min(root -> data, right.min));
			ans.max = max(left.max, max(root -> data, right.max));
		}
		return ans;
	}
	Pair<int> ans;
	ans.height = max(left.height, right.height);
	ans.isBST = false;
	ans.min = min(left.min, min(root -> data, right.min));
	ans.max = max(left.max, max(root -> data, right.max));
return ans;
}

int maxSubTreeHeight(BinaryTreeNode<int> * root) {
	Pair<int> ans = helper(root);
return ans.height;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int maxSubTree = maxSubTreeHeight(root);
	cout << "Height of the largest sub tree in the given tree is: " << maxSubTree << endl;
	delete root;
return 0;
}
