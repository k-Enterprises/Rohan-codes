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
class Stack {
	private :
	Node<T> * head;
	int sizeS;
	public :
	Stack() {
		this -> head = NULL;
		sizeS = 0;
	}
	void push(T const &data) {
		Node<T> * newNode = new Node<T>(data); // always specify <T> when creating a oject of template class
		if(head == NULL) {
			head = newNode;
			this -> sizeS ++;
		} else {
			newNode -> next = head;
			head = newNode;
			this -> sizeS ++;
		}
	}
	bool isEmpty() const {
		if(this -> sizeS == 0) {
			return true;
		}
		return false;
	}
	T pop() {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return 0;
		}
		T poped = head -> data;
		Node<T> * temp = head -> next;
		delete head;
		head = temp;
		this -> sizeS --;
		return poped;
	}
	T top() const {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return 0;
		}
		return head -> data;
	}
	int size() const {
		return sizeS;
	}
};
