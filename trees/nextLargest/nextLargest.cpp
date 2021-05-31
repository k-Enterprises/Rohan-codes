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

TreeNode<int> * nextLargest(TreeNode<int> * root, int x) {
	TreeNode<int> * large = NULL;
	if(root -> data > x) {
		large = root;
	}
	for(int i = 0; i < root -> children.size(); i ++) {
		TreeNode<int> * smallAns = nextLargest(root -> children[i], x);
		if(large == NULL) {
			large = smallAns;
		}
		else if(smallAns != NULL && smallAns -> data < large -> data) {
			large = smallAns;
		} 
	}
return large;
}

int main() {
	TreeNode<int> * root = takeInput();
	int x;
	cout << "Enter the value of x: ";
	cin >> x;
	TreeNode<int> * ans = nextLargest(root, x);
	cout << "Next largest node data in tree is: " << ans -> data << endl;
	delete root;
return 0;
}
