#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> * takeInputLevelWise() {
	int rootData;
	cout << "Enter the root data: ";
	cin >> rootData;
	TreeNode<int> * root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		TreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		int numChildren;
		cout << "Enter the number of children of " << front -> data << ": ";
		cin >> numChildren;
		for(int i = 0; i < numChildren; i ++) {
			int childData;
			cout << "Enter the data of " << i << "th child of " << front -> data << ": ";
			cin >> childData;
			TreeNode<int> * child = new TreeNode<int>(childData);
			front -> children.push_back(child);
			pendingNodes.push(child);
		}
	}
return root;
}

void printTreeLevelWise(TreeNode<int> * root) {
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		TreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		cout << front -> data << ": ";
		for(int i = 0; i < front -> children.size(); i ++) {
			cout << front -> children[i] -> data << ", ";
			pendingNodes.push(front -> children[i]);
		}
		cout << endl;
	}
return;
}

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
	TreeNode<int> * root = takeInputLevelWise();
	printTree(root);
	cout << endl;
	cout << endl;
	printTreeLevelWise(root);
return 0;
}
