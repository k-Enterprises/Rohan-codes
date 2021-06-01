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

Pair<int> helper(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		Pair<int> ans;
		ans.height = 0;
		ans.isBalanced = true;
		return ans;
	}
	Pair<int> ans1 = helper(root -> left);
	Pair<int> ans2 = helper(root -> right);
	if(ans1.isBalanced == true && ans2.isBalanced == true) {
		Pair<int> ans;
		if(ans1.height - ans2.height <= 1) {
			ans.height = std :: max(ans1.height, ans2.height) + 1; // important
			ans.isBalanced = true;
			return ans;
		} else {
			ans.height = std :: max(ans1.height, ans2.height) + 1; // inportant
			ans.isBalanced = false;
			return ans;
		}
	}
	Pair<int> ans;
	ans.height = std :: max(ans1.height, ans2.height) + 1;
	ans.isBalanced = false;
return ans;
}

bool checkBalance(BinaryTreeNode<int> * root) {
	Pair<int> ans = helper(root);
	return ans.isBalanced;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	bool ans = checkBalance(root);
	cout << "Binary tree is balanced: " << ((ans) ? "true" : "false") << endl;
return 0;
}
