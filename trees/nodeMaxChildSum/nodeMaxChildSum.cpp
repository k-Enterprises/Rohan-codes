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

Pair<int> nodeMaxChildSum(TreeNode<int> * root) {
	if(root -> children.size() == 0) {
		Pair<int> p;
		p.sum = root -> data;
		p.max = root;
		return p;
	}
	Pair<int> p;
	p.sum = root -> data;
	p.max = root;
	for(int i = 0; i < root -> children.size(); i ++) {
		p.sum += root -> children[i] -> data;
	}
	for(int i = 0; i < root -> children.size(); i ++) {
		Pair<int> small = nodeMaxChildSum(root -> children[i]);
		if(p.sum < small.sum) {
			p.sum = small.sum;
			p.max = small.max;
		}
	}
return p;
}

int main() {
	TreeNode<int> * root = takeInput();
	Pair<int> maxP = nodeMaxChildSum(root);
	cout << maxP.max -> data << endl;
return 0;
}
