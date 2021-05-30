#include <iostream>
#include "TreeNode.h"
using namespace std;

void printTree(TreeNode<int> * root) {
	if(root == NULL) { // not a base case it is an edge case !
		return;
	}
	cout << root -> data << ": ";
	for(int i = 0; i < root -> children.size(); i ++) { // running specific number of times so no need of base case
		cout << root -> children[i] -> data << ", ";
	}
	cout << endl;
	for(int i = 0; i < root -> children.size(); i ++) {
		printTree(root -> children[i]);
	}
return;
}

TreeNode<int> * takeInput() {
	int rootData, numChildren;
	cout << "Enter the root data: ";
	cin >> rootData;
	TreeNode<int> * root = new TreeNode<int>(rootData);
	cout << "Enter number of children of " << rootData << ": ";
	cin >> numChildren;
	for(int i = 0; i < numChildren; i ++) { // it is going to run only n times specified so no need of base case
		TreeNode<int> * child = takeInput();
		root -> children.push_back(child);
	}
return root;
}

int main() {
	/*
	TreeNode<int> * root = new TreeNode<int>(1);
	TreeNode<int> * node1 = new TreeNode<int>(2);
	TreeNode<int> * node2 = new TreeNode<int>(3);
	root -> children.push_back(node1);
	root -> children.push_back(node2);
	printTree(root);
	*/
	TreeNode<int> * root = takeInput();
	printTree(root);
return 0;
}
