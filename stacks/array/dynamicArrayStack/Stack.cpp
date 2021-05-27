class Stack {
	private :
	int * data;
	int nextIndex;
	int capacity;
	public : 
	Stack() {
		this -> data = new int[5];
		this -> nextIndex = 0;
		this -> capacity = 5;
	}
	void push(int const & value) {
		if(nextIndex == capacity) {
			int * newData = new int[this -> capacity * 2];
			for(int i = 0; i < this -> capacity; i ++) {
				newData[i] = data[i];
			}
			newData[nextIndex] = value;
			nextIndex ++;
			delete [] this -> data;
			this -> data = newData;
			this -> capacity = this -> capacity * 2;
		} else {
			this -> data[nextIndex] = value;
			nextIndex ++;
		}
	}
	bool isEmpty() const {
		if(nextIndex == 0) {
			return true;
		}
		return false;
	}
	int top() const {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return INT_MIN;
		}
		return this -> data[nextIndex - 1];
	}
	int pop() {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return INT_MIN;
		}
		int poped = this -> data[nextIndex - 1];
		nextIndex --;
		return poped;
	}
	int size() const {
		return nextIndex;
	}
};
