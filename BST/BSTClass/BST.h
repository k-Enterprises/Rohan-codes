#include "BinaryTreeNode.h"
using namespace std;
class BST {
	private :
		BinaryTreeNode<int> * root; // just a pointer
		bool hasDataHelper(int data, BinaryTreeNode<int> * root) {
			if(root == NULL) {
				return false;
			}
			if(root -> data == data) {
				return true;
			}
			bool ans;
			if(data < root -> data) {
				ans = hasDataHelper(data, root -> left);
			} else {
				ans = hasDataHelper(data, root -> right);
			}
			return ans;
		}
		
		BinaryTreeNode<int> * insertHelper(BinaryTreeNode<int> * root, int data) {
			if(root == NULL) {
				BinaryTreeNode<int> * newNode = new BinaryTreeNode<int>(data);
				return newNode;
			}
			if(root -> data >= data) {
				BinaryTreeNode<int> * leftChild = insertHelper(root -> left, data);
				root -> left = leftChild;
				return root;
			} else {
				BinaryTreeNode<int> * rightChild = insertHelper(root -> right, data);
				root -> right = rightChild;
				return root;
			}
		}
		BinaryTreeNode<int> * removeHelper(BinaryTreeNode<int> * root, int data) {
			if(root == NULL) {
				return NULL;
			}
			if(root -> data == data) {
				if(root -> left == NULL && root -> right == NULL) {
					delete root;
					return NULL;
				} else if(root -> left != NULL && root -> right == NULL) {
					BinaryTreeNode<int> * leftNode = root -> left;
					root -> left = NULL;
					delete root;
					return leftNode;
				} else if(root -> left == NULL && root -> right != NULL) {
					BinaryTreeNode<int> * rightNode = root -> right;
					root -> right = NULL;
					delete root;
					return rightNode;
				} else {
					BinaryTreeNode<int> * max = root -> left;
					while(max -> right != NULL) {
						max = max -> right;
					}
					int leftMax = max -> data;
					root -> data = leftMax;
					root -> left = removeHelper(root -> left, leftMax);
					return root;
				}
			} else if (data < root -> data) {
				BinaryTreeNode<int> * leftPart = removeHelper(root -> left, data);
				root -> left = leftPart;
				return root;
			} else {
				BinaryTreeNode<int> * rightPart = removeHelper(root -> right, data);
				root -> right = rightPart;
				return root;
			}
		}
		void printTreeHelper(BinaryTreeNode<int> * root) {
			if(root == NULL) {
				return;
			}
			cout << root -> data << ": ";
			if(root -> left != NULL) {
				cout << "L: " << root -> left -> data << ", ";
			}
			if(root -> right != NULL) {
				cout << "R: " << root -> right -> data;
			}
			cout << endl;
			printTreeHelper(root -> left);
			printTreeHelper(root -> right);
			return;
		}
	public :
		BST() {
			this -> root = NULL;
		}
		~BST() {
			delete this -> root;
		}
		bool hasData(int data) {
			bool ans = hasDataHelper(data, root);
			return ans;
		}
		void insert(int data) {
			this -> root = insertHelper(this -> root, data);

		return;
		}
		void remove(int data) {
			this -> root = removeHelper(this -> root, data);
		}
		void printTree() {
			printTreeHelper(this -> root);
		}
};
