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
		cout << "Eneter the velue of left child of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Eneter the velue of right child of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

void levelOrder(BinaryTreeNode<int> * root) {
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	pendingNodes.push(NULL);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		if(front == NULL) {
			if(pendingNodes.empty()) {
				break;
			}
			cout << endl;
			pendingNodes.push(NULL);
		} else {
			cout << front -> data << " ";
			if(front -> left != NULL) {
				pendingNodes.push(front -> left);
			} 
			if(front -> right != NULL) {
				pendingNodes.push(front -> right);
			}
		}
	}
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	levelOrder(root);
	cout << endl;
return 0;
}
