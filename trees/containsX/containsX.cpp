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

bool containsX(TreeNode<int> * root, int x) {
	if(root == NULL) {
		return false;
	}
	if(root -> data == x) {
		return true;
	}
	bool ans = false;
	for(int i = 0; i < root -> children.size(); i ++) {
		ans = containsX(root -> children[i], x);
		if(ans == true) {
			return true;
		}
	}
return false;
}

int main() {
	TreeNode<int> * root = takeInput();
	int x;
	cout << "Enter the number you want to check if prent or not: ";
	cin >> x;
	bool ans = containsX(root, x);
	cout << "The element is present: " << ((ans) ? "true" : "false") << endl;
	delete root;
return 0;
}
