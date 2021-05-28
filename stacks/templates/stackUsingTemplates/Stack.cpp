template <typename T>
class Stack {
	private :
	T * data;
	int nextIndex;
	int capacity;
	public :
	Stack() {
		this -> data = new T[5];
		this -> nextIndex = 0;
		this -> capacity = 5;
	}
	void push(T const &value) {
		if(nextIndex == capacity) {
			T * newData = new T[this -> capacity * 2];
			for(int i = 0; i < capacity; i ++) {
				newData[i] = data[i];
			}
			newData[nextIndex] = value;
			delete [] data;
			this -> data = newData;
			this -> nextIndex ++;
			this -> capacity = this -> capacity * 2;
		} else {
			this -> data[nextIndex] = value;
			this -> nextIndex ++;
		}
	}
	bool isEmpty() const {
		if(nextIndex == 0) {
			return true;
		}
		return false;
	}
	T pop() {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return 0; // this is universal value for all data types int, double, char, bool, & pointers
		}
		T poped = this -> data[nextIndex - 1];
		nextIndex --;
		return poped;
	}
	T top() const {
		if(this -> isEmpty()) {
			cout << "Stack is empty: ";
			return 0;
		}
		return this -> data[nextIndex - 1];
	}
	int size() const {
		return this -> nextIndex;
	}
};
