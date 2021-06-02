#include <iostream>
#include <queue>
#include <stack>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> * takeInput() {
	int rootData;
	cout << "Enter the root data: ";
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		int leftData, rightData;
		cout << "Enter the value of left child of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of right child of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

void zigZag(BinaryTreeNode<int> * root) {
	stack<BinaryTreeNode<int>*> s1;
	stack<BinaryTreeNode<int>*> s2;
	s1.push(root);
	int currentLevelRemaining = 1; // mentain control over 1 stack at a time till it gets empty
	int nextLevelCount = 0;
	bool flag = true; // giving control to s1 (intitially)
	while(!s1.empty() || !s2.empty()) {
		if(s1.empty() && s2.empty()) {
			break;
		}
		if(flag) {
			BinaryTreeNode<int> * top = s1.top();
			s1.pop();
			cout << top -> data << " ";
			currentLevelRemaining --;
			if(top -> left != NULL) { // going L -> R in s2 so that it will print R -> L (LIFO)
				s2.push(top -> left);
				nextLevelCount ++;
			}
			if(top -> right != NULL) {
				s2.push(top -> right);
				nextLevelCount ++;
			}
			if(currentLevelRemaining == 0) {
				cout << endl;
				currentLevelRemaining = nextLevelCount;
				nextLevelCount = 0;
				flag = false; // giving control to s2
			}
		} else {
			BinaryTreeNode<int> * top = s2.top();
			s2.pop();
			cout << top -> data << " ";
			currentLevelRemaining --;
			if(top -> right != NULL) { // going R -> L in s1 so that it will print L -> R (LIFO)
				s1.push(top -> right);
				nextLevelCount ++;
			}
			if(top -> left != NULL) {
				s1.push(top -> left);
				nextLevelCount ++;
			}
			if(currentLevelRemaining == 0) {
				cout << endl;
				currentLevelRemaining = nextLevelCount;
				nextLevelCount = 0;
				flag = true; // giving control to s1 
			}
		}
	}
	cout << endl;
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	zigZag(root);
return 0;
}
