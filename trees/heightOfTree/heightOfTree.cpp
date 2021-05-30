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
		cout << "Enter the number of child of " << front -> data << ": ";
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

int heightOfTree(TreeNode<int> * root) {
	int height = 0;
	for(int i = 0; i < root -> children.size(); i ++) {
		int smallHeight = heightOfTree(root -> children[i]);
		if(smallHeight > height) {
			height = smallHeight;
		}
	}
return height + 1;
}

int main() {
	TreeNode<int> * root = takeInput();
	int height = heightOfTree(root);
	cout << "The height of the tree is: " << height << endl;
return 0;
}
