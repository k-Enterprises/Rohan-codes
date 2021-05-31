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

Pair<int> secondLargest(TreeNode<int> * root) {
	Pair<int> ans;
	ans.max = root;
	ans.secMax = NULL;
	for(int i = 0; i < root -> children.size(); i ++) {
		Pair<int> temp = secondLargest(root -> children[i]);
		if(ans.max -> data > temp.max -> data) {
			if(ans.secMax == NULL && temp.secMax == NULL) {
				ans.secMax = temp.max;
			} else if(temp.secMax == NULL) {
				if(ans.secMax -> data <= temp.max -> data) {
					ans.secMax = temp.max;
				}
			} else if(ans.secMax == NULL) {
				ans.secMax = temp.max;
			} else {
				if(ans.secMax -> data < temp.max -> data) {
					ans.secMax = temp.max;
				}
			}
		} else {
			TreeNode<int> * x = ans.max;
			ans.max = temp.max;
            if(ans.secMax == NULL && temp.secMax == NULL) {
                  ans.secMax = x;
              } else if(temp.secMax == NULL) {
                  ans.secMax = x;
              } else if(ans.secMax == NULL) {
                  if(x -> data > temp.secMax -> data) {
				  	ans.secMax = x;
				  } else {
				  	ans.secMax = temp.secMax;
				  }
              } else {
                  if(x -> data >= temp.secMax -> data) {
				  	ans.secMax = x;
				  } else {
				  	ans.secMax = temp.secMax;
				  }
              }
		}
	}
return ans;
}

int main() {
	TreeNode<int> * root = takeInput();
	Pair<int>  ans = secondLargest(root);
	cout << "The second largest node data in tree is: " << ans.secMax -> data << endl;
}
