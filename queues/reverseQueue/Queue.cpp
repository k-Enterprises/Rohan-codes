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
class Queue {
	private : 
		Node<T> * head;
		Node<T> * tail;
		int size;
	public : 
		Queue() {
			this -> head = NULL;
			this -> tail = NULL;
			this -> size = 0;
		}
		bool isEmpty() const {
			return this -> size == 0;
		}
		int getSize() const {
			return this -> size;
		}
		T front() const {
			if(this -> isEmpty()) {
				cout << "Queue is empty ! ";
				return 0;
			}
			return this -> head -> data;
		}
		void enqueue(T const &data) {
			Node<T> * newNode = new Node<T>(data);
			if(this -> head == NULL) {
				this -> head = newNode;
				this -> tail = newNode;
			} else {
				this -> tail -> next = newNode;
				this -> tail = newNode;
			}
			size ++;
		}
		void dequeue() {
			if(this -> isEmpty()) {
				cout << "Queue is empty ! " << endl;
				return;
			}
			Node<T> * temp = this -> head;
			delete head;
			this -> head = temp -> next;
			size --;
		}
};
