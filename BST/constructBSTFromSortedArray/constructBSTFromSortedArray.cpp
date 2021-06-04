#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> * helper(int * arr, int si, int ei) {
	if(si > ei) {
		return NULL;
	}
	int mid = (si + ei) / 2;
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(arr[mid]);
	BinaryTreeNode<int> * leftChild = helper(arr, si, mid - 1);
	BinaryTreeNode<int> * rightChild = helper(arr, mid + 1, ei);
	root -> left = leftChild;
	root -> right = rightChild;
return root;
}

BinaryTreeNode<int> * constructTree(int * arr, int size) {
	BinaryTreeNode<int> * root = helper(arr, 0, size - 1);
return root;
}

void printTree(BinaryTreeNode<int> * root) {
	if(root == NULL) {
		return;
	}
	cout << root -> data << " ";
	printTree(root -> left);
	printTree(root -> right);
return;
}

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of " << i << "th element: ";
		cin >> arr[i];
	}
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	BinaryTreeNode<int> * root = constructTree(arr, size);
	cout << "The tree is: ";
	printTree(root);
	cout << endl;
return 0;
}
