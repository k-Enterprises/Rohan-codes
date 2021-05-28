template <typename T>
class Queue {
	private :
		int nextIndex;
		int frontIndex;
		int size;
		int capacity;
		T * data;
	public :
		Queue(int capacity) {
			this -> capacity = capacity;
			this -> size = 0;
			this -> nextIndex = 0;
			this -> frontIndex = -1;
			this -> data = new T[capacity];
		} 
		void enqueue(T const &value) {
			if(this -> nextIndex == this -> frontIndex) {
				cout << "Queue is full !" << endl;
				return;
			} else if(this -> nextIndex == this -> capacity) {
				if(this -> size == this -> capacity) {
					cout << "Queue is full !" << endl;
					return;
				} else {
					this -> nextIndex = 0;
					this -> data[nextIndex] = value;
					this -> nextIndex ++;
					this -> size ++;
					return;
				}
			} else {
				if(this -> size == 0) {
					this -> data[nextIndex] = value;
					this -> size ++;
					this -> nextIndex ++;
					this -> frontIndex ++;
				} else {
					this -> data[nextIndex] = value;
					this -> size ++;
					this -> nextIndex ++;
				}
			}
			return;
		}
		T front() const {
			if(this -> size == 0) {
				cout << "Queue is empty: ";
				return 0;
			}
			return this -> data[frontIndex];
		}
		T dequeue() {
			if(this -> size == 0) {
				cout << "Queue is empty: ";
				return 0;
			} else if(this -> frontIndex == this -> nextIndex && this -> size == 0) {
				cout << "Queue is empty !: ";
				return 0;
			}
			T ans = this -> data[frontIndex];
			this -> frontIndex ++;
			this -> size --;
			if(this -> frontIndex == capacity) {
				this -> frontIndex = 0;
			}
			return ans;
		}
		bool isEmpty() const {
			return this -> size == 0;
		}
		int getSize() const {
			return this -> size;
		}
		T test() {
			return this -> data[nextIndex - 1];
		}
};
