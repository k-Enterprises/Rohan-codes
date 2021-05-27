class Stack {
	private :
	int * data;
	int nextIndex;
	int capacity;
	public :
	Stack(int size) {
		this -> data = new int[size];
		this -> nextIndex = 0;
		this -> capacity = size;
	}
	void push(int const & value) {
		if(nextIndex == capacity) {
			cout << "Stack is full" << endl;
			return;
		}
		this -> data[nextIndex] = value;
		nextIndex ++;
		return;
	}
	int top() const{
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return INT_MIN;
		}
		return this -> data[nextIndex - 1];
	}
	int pop() {
		if(nextIndex == 0) {
			cout << "Stack is empty: ";
			return INT_MIN;
		}
		int poped = this -> data[nextIndex - 1];
		this -> nextIndex --;
		return poped;
	}
	int size() const{
		return this -> nextIndex;
	}
	bool isEmpty() const{
		if(this -> nextIndex == 0) {
			return true;
		} 
		return false;
	}
};
