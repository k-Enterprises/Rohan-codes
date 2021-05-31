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

bool checkIdentical(TreeNode<int> * root1, TreeNode<int> * root2) {
	if(root1 -> data == root2 -> data && root1 -> children.size() == 0 && root2 -> children.size() == 0) {
		return true;
	}
	if(root1 -> data != root2 -> data || root1 -> children.size() != root2 -> children.size()) {
		return false;
	}
	bool ans;
	for(int i = 0; i < root1 -> children.size(); i ++) {
		ans = checkIdentical(root1 -> children[i], root2 -> children[i]);
		if(ans == false) {
			return false;
		}
	}
return true;
}

int main() {
	TreeNode<int> * root1 = takeInput();
	TreeNode<int> * root2 = takeInput();
	bool ans = checkIdentical(root1, root2);
	cout << "Is identical: " << ((ans) ? "true" : "false") << endl;
return 0;
}
