template <typename T>
class Node {
	public : 
		T data;
		Node<T> * next;
		Node(T const &data) {
			this -> data = data;
			this -> next = NULL;
		}
};

template <typename T>
class Stack {
	private :
		Node<T> * head;
		int size;
	public :
		Stack() {
			this -> head = NULL;
			this -> size = 0;
		}
		bool isEmpty() const {
			return this -> size == 0;
		}
		T top() const {
			if(this -> size == 0) {
				cout << "Stack is empty ";
				return 0;
			}
			return this -> head -> data;
		}
		int getSize() const {
			return this -> size;
		}
		void push(T const &data) {
			Node<T> * newNode = new Node<T>(data);
			if(head == NULL) {
				head = newNode;
			} else {
				newNode -> next = head;
				head = newNode;
			}
			size ++;
		}
		void pop() {
			if(this -> isEmpty()) {
				cout << "Stack is empty !" << endl;
			}
			Node<T> * temp = this -> head;
			head = head -> next;
			delete temp;
			size --;
		}
};
