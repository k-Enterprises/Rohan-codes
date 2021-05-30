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

int returnNumberOfLeaf(TreeNode<int> * root) {
	if(root == NULL) {
		return 0;
	}
	int ans = 0;
	if(root -> children.size() == 0) {
		return 1;
	}
	for(int i = 0; i < root -> children.size(); i ++) {
		ans += returnNumberOfLeaf(root -> children[i]);
	}
return ans;
}

int main() {
	TreeNode<int> * root = takeInput();
	int numLeaf = returnNumberOfLeaf(root);
	cout << "Number of leaf in this tree is: " << numLeaf << endl;
return 0;
}
