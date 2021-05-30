#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> * takeInput() {
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
			cout << "Enter the value of " << i << "th child of " << front -> data << ": ";
			cin >> childData;
			TreeNode<int> * child = new TreeNode<int>(childData);
			front -> children.push_back(child);
			pendingNodes.push(child);
		}
	}
return root;
}

void printNodesAtD(TreeNode<int> * root, int d) {
	if(root == NULL) {
		return;
	}
	if(d == 0) {
		cout << root -> data << " ";
		return;
	}
	for(int i = 0; i < root -> children.size(); i ++) {
		printNodesAtD(root -> children[i], d - 1);
	}
return;
}

int main() {
	TreeNode<int> * root = takeInput();
	int d;
	cout << "Enter the level of which you want to print nodes: ";
	cin >> d;
	printNodesAtD(root, d);
	cout << endl;
return 0;
}
