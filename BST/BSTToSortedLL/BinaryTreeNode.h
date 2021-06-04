template <typename T>
class BinaryTreeNode {
	public :
		T data;
		BinaryTreeNode<int> * left;
		BinaryTreeNode<int> * right;
		BinaryTreeNode(T data) {
			this -> data = data;
			this -> left = NULL;
			this -> right = NULL;
		}
		~BinaryTreeNode() {
			delete this -> left;
			delete this -> right;
		}
};

template <typename T>
class Node {
	public :
		T data;
		Node<T> * next;
		Node(T data) {
			this -> data = data;
			this -> next = NULL;
		}
};

template <typename T>
class Pair {
	public :
		Node<T> * head;
		Node<T> * tail;
		Pair() {
			this -> head = NULL;
			this -> tail = NULL;
		}
};
