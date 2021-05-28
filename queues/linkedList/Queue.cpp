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
		T front() const {
			if(this -> isEmpty()) {
				cout << "Queue is empty ! ";
				return 0;
			}
			return this -> head -> data;
		}
		int getSize() const {
			return this -> size;
		}
		void enqueue(T const &value) {
			Node<T> * newNode = new Node<T>(value);
			if(this -> head == NULL) {
				this -> head = newNode;
				this -> tail = newNode;
				size ++;
			} else {
				this -> tail -> next = newNode;
				this -> tail = newNode;
				size ++;
			}
		}
		T dequeue() {
			if(this -> isEmpty()) {
				cout << "Queue is empty ! ";
				return 0;
			}
			Node<T> * temp = this -> head;
			T ans = temp -> data;
			this -> head = this -> head -> next;
			delete temp;
			size --;
			return ans;
		}
};
