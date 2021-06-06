#include <iostream>
#include <queue>
#include <stack>
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

int count(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return 0;
	}
	return (count(root -> left) + count(root -> right) + 1);
}

void pairSumBST(BinaryTreeNode<int> * root, int k) {
	if(root == NULL) {
		return;
	}
	int totalCount = count(root);
	int counter = 0;
	stack<BinaryTreeNode<int>*> inOrder;
	stack<BinaryTreeNode<int>*> revInOrder;
	BinaryTreeNode<int> * currentNode = root;
	while(currentNode != NULL) {
		inOrder.push(currentNode);
		currentNode = currentNode -> left;
	}
	currentNode = root;
	while(currentNode != NULL) {
		revInOrder.push(currentNode);
		currentNode = currentNode -> right;
	}
	while(counter < totalCount -1) {
		BinaryTreeNode<int> * top1 = inOrder.top();
		BinaryTreeNode<int> * top2 = revInOrder.top();
		if(top1 -> data + top2 -> data == k) {
			cout << top1 -> data << " " << top2 -> data << endl;
			BinaryTreeNode<int> * top = top1;
			inOrder.pop();
			counter ++;
			if(top -> right != NULL) {
				top = top -> right;
				while(top != NULL) { // to get just max of current poped node = min of right subtree
					inOrder.push(top);
					top = top -> left;
				}
			}
			top = top2;
			revInOrder.pop();
			counter ++;
			if(top -> left != NULL) {
				top = top -> left;
				while(top != NULL) { // to get just min of current poped node = max of left subtree;
					revInOrder.push(top);
					top = top -> right;
				}
			}
		} else if(top1 -> data + top2 -> data > k) {
			BinaryTreeNode<int> * top = top2;
			revInOrder.pop();
			counter ++;
			if(top -> left != NULL) {
				top = top -> left;
				while(top != NULL) {
					revInOrder.push(top);
					top = top -> right;
				}
			}
		} else {
			BinaryTreeNode<int> * top = top1;
			inOrder.pop();
			counter ++;
			if(top -> right != NULL) {
				top = top -> right;
				while(top != NULL) {
					inOrder.push(top);
					top = top -> left;
				}
			}
		}
	}
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int k;
	cout << "Eneter the value of the k: ";
	cin >> k;
	pairSumBST(root, k);
return 0;
}
