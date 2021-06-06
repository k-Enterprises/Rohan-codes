#include <iostream>
#include <queue>
#include <vector>
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
		cout << "Enter the value of the left child of " << front -> data << ": ";
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> * leftChild = new BinaryTreeNode<int>(leftData);
			front -> left = leftChild;
			pendingNodes.push(leftChild);
		}
		cout << "Enter the value of the right child of " << front -> data << ": ";
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> * rightChild = new BinaryTreeNode<int>(rightData);
			front -> right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
return root;
}

void printArray(vector<int> * arr) {
	for(int i = 0; i < arr -> size(); i ++) {
		cout << arr -> at(i) << " ";
	}
	cout << endl;
}

void printSumRootToLeaf(BinaryTreeNode<int> * root, vector<int> * arr, int k) {
	if(root == NULL) {
		return;
	}
	k -= root -> data;
	arr -> push_back(root -> data);
	if(root -> left == NULL && root -> right == NULL) {
		if(k == 0) {
			printArray(arr);
		}
		arr -> pop_back(); // eleminating last element so that we can add more root yet mentaining the sum to k
		return;
	}
	printSumRootToLeaf(root -> left, arr, k);
	printSumRootToLeaf(root -> right, arr, k);
	arr -> pop_back();
return;
}

void print(BinaryTreeNode<int> * root, int k) {
	vector<int> * arr = new vector<int>();
	printSumRootToLeaf(root, arr, k);
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	int k;
	cout << "Enter the value of the k: ";
	cin >> k;
	print(root, k);
return 0;
}
