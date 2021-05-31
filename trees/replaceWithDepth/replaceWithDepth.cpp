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
			cout << "Enter the value of the " << i << "th child of " << front -> data << ": ";
			cin >> childData;
			TreeNode<int> * child = new TreeNode<int>(childData);
			front -> children.push_back(child);
			pendingNodes.push(child);
		}
	}
return root;
}

void replaceWithDepth(TreeNode<int> * root, int depth) {
	root -> data = depth;
	for(int i = 0; i < root -> children.size(); i ++) {
		replaceWithDepth(root -> children[i], depth + 1);
	}
return;
}

void replace(TreeNode<int> * root) {
	int depth = 0;
	replaceWithDepth(root, depth);
}

void printTree(TreeNode<int> * root) {
	cout << root -> data << " ";
	for(int i = 0; i < root -> children.size(); i ++) {
		printTree(root -> children[i]);
	}
return;
}

int main() {
	TreeNode<int> * root = takeInput();
	replace(root);
	cout << "The final tree is: ";
	printTree(root);
	cout << endl;
return 0;
}
