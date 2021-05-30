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

TreeNode<int> * maxOfNodes(TreeNode<int> * root) {
	TreeNode<int> * max = root;
	if(root == NULL) {
		return NULL;
	}
	TreeNode<int> * smallOutput;
	for(int i = 0; i < root -> children.size(); i ++) {
		smallOutput = maxOfNodes(root -> children[i]);
		if(max -> data < smallOutput -> data) {
			max = smallOutput;
		}
	}
return max;
}

int main() {
	TreeNode<int> * root = takeInput();
	TreeNode<int> * max = maxOfNodes(root);
	cout << "The max node data in tree is: " << max -> data << endl;
return 0;
}
