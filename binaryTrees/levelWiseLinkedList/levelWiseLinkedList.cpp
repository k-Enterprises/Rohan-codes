#include <iostream>
#include <vector>
#include <queue>
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

void levelWiseLL (BinaryTreeNode<int> * root, vector<Node<int>*> &heads){
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	pendingNodes.push(NULL);
	Node<int> * current = NULL;
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> * front = pendingNodes.front();
		pendingNodes.pop();
		if(front == NULL) {
			if(pendingNodes.empty()) {
				break;
			}
			front = pendingNodes.front();
			pendingNodes.pop();
			Node<int> * head = new Node<int>(front -> data);
			heads.push_back(head);
			current = head;
			pendingNodes.push(NULL);
			if(front -> left != NULL) {
				pendingNodes.push(front -> left);
			}
			if(front -> right != NULL) {
				pendingNodes.push(front -> right);
			}
		} else {
			Node<int> * newNode = new Node<int>(front -> data);
			if(current == NULL) {
				current = newNode;
				heads.push_back(newNode);
			} else {
				current -> next = newNode;
				current = newNode;
			}
			if(front -> left != NULL) {
				pendingNodes.push(front -> left);
			}
			if(front -> right != NULL) {
				pendingNodes.push(front -> right);
			}
		}
	}
return;
}

void printList(vector<Node<int>*> &heads) {
	for(int i = 0; i < heads.size(); i ++) {
		Node<int> * temp = heads[i];
		while(temp != NULL) {
			cout << temp -> data << " ";
			temp = temp -> next;
		}
		cout << endl;
	}
}

int main() {
	BinaryTreeNode<int> * root = takeInput();
	vector<Node<int>*> heads;
	levelWiseLL(root, heads);
	printList(heads);
return 0;
}
