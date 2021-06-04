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
		cout << "Enter the value of left child of " << front -> data << ": ";
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

vector<int> * rootToNodePath(BinaryTreeNode<int> * root, int data) {
	if(root == NULL) {
		return NULL;
	}
	if(root -> data == data) {
		vector<int> * output = new vector<int>;
		output -> push_back(root -> data);
		return output;
	}
	vector<int> * leftOutput = rootToNodePath(root -> left, data);
	if(leftOutput != NULL) {
		leftOutput -> push_back(root -> data);
		return leftOutput;
	}
	vector<int> * rightOutput = rootToNodePath(root -> right, data);
	if(rightOutput != NULL) {
		rightOutput -> push_back(root -> data);
		return rightOutput;
	} else {
		return NULL;
	}
}

void printVector(vector<int> * output) {
	for(int i = 0; i < output -> size(); i ++) {
		cout << output -> at(i) << " ";
	}
	cout << endl;
return;
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	cout << "Enter the value of node to which you want to find path: ";
	int data;
	cin >> data;
	vector<int> * output = rootToNodePath(root, data);
	cout << "Path from root to the data node is: ";
	if(output != NULL) {
		printVector(output);
	} else {
		cout << endl;
	}
return 0;
}
