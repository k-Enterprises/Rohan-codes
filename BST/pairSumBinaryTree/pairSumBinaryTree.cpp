#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
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
		cout << "Enter the value of the left data of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of the right data of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

void treeToArray(BinaryTreeNode<int> * root, vector<int> * arr) {
	if(root == NULL) {
		return;
	}
	arr -> push_back(root -> data);
	treeToArray(root -> left, arr);
	treeToArray(root -> right, arr);
}

void printPair(BinaryTreeNode<int> * root, int s) {
	if(root == NULL) {
		return;
	}
	vector<int> * arr = new vector<int>();
	treeToArray(root, arr);
	sort(arr -> begin(), arr -> end());
	int i = 0, j = arr -> size() - 1;
	while(i < j) {
		if(arr -> at(i) + arr -> at(j) == s) {
			cout << arr -> at(i) << " " << arr -> at(j) << endl;
			i ++;
			j --;
		} else if(arr -> at(i) + arr -> at(j) < s) {
			i ++;
		} else {
			j --;
		}
	}
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int s;
	cout << "Enter the value of pair sum: ";
	cin >> s;
	printPair(root, s);
return 0;
}
