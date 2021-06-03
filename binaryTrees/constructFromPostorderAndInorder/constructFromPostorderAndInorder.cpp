#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> * construct(int * postOrder, int postStart, int postEnd, int * inOrder, int inStart, int inEnd) {
	if(postStart > postEnd || inStart > inEnd) {
		return NULL;
	}
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(postOrder[postEnd]);
	int k = 0;
	for(int i = 0; i <= inEnd; i ++) {
		if(root -> data == inOrder[i]) {
			k = i;
			break;
		}
	}
	BinaryTreeNode<int> * leftChild = construct(postOrder, postStart, (postStart + k) - inStart - 1, inOrder, inStart, k - 1);
	BinaryTreeNode<int> * rightChild = construct(postOrder, (postStart + k) - inStart, postEnd - 1, inOrder, k + 1, inEnd);
	root -> left = leftChild;
	root -> right = rightChild;
return root;
}

BinaryTreeNode<int> * constructTree(int * postOrder, int size1, int * inOrder, int size2) {
	BinaryTreeNode<int> * root = construct(postOrder, 0, size1 - 1, inOrder, 0, size2 - 1);
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

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of element of " << i << "th element: ";
		cin >> arr[i];
	}
return;
}

int main() {
	int size;
	cout << "Enter the size of the post order and in order array: ";
	cin >> size;
	int * postOrder = new int[size];
	takeInput(postOrder, size);
	cout << endl;
	int * inOrder = new int[size];
	takeInput(inOrder, size);
	BinaryTreeNode<int> * root = constructTree(postOrder, size, inOrder, size);
	printTree(root);
return 0;
}
