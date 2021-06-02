#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

void takeInput(int arr[], int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value for the " << i << "th element: ";
		cin >> arr[i];
	}
return;
}

BinaryTreeNode<int> * cunstruct(int * pre, int preStart, int preEnd, int * in, int inStart, int inEnd) {
	if(preStart > preEnd || inStart > inEnd) {
		return NULL;
	}
	int rootData = pre[preStart];
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
	int k = 0;
	for(int i = inStart; i <= inEnd; i ++) {
		if(in[i] == rootData) {
			k = i;
			break;
		}
	}
	BinaryTreeNode<int> * leftChild = cunstruct(pre, preStart + 1, (k - inStart) + preStart, in, inStart, k - 1);
	BinaryTreeNode<int> * rightChild = cunstruct(pre, (k - inStart) + preStart + 1, preEnd, in, k + 1, inEnd);
	root -> left = leftChild;
	root -> right = rightChild;
return root;
}

void printTree(BinaryTreeNode<int> * root) {
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
	cout << endl;
return;
}

BinaryTreeNode<int> * buildTree(int * pre, int size1, int * in, int size2) {
	BinaryTreeNode<int> * root = cunstruct(pre, 0, size1 - 1, in, 0, size2 - 1);
	return root;
}

int main() {
	int size;
	cout << "Enter the size of the pre-order and in-order list: ";
	cin >> size;
	int * pre = new int[size];
	int * in = new int[size];
	takeInput(pre, size);
	takeInput(in, size);
	BinaryTreeNode<int> * root = buildTree(pre, size, in, size);
	printTree(root);
return 0;
}
