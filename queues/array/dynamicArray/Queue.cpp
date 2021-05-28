template <typename T>
class Queue {
	private :
		int frontIndex;
		int nextIndex;
		int size;
		int capacity;
		T * data;
	public :
		Queue() {
			this -> frontIndex = -1;
			this -> nextIndex = 0;
			this -> size = 0;
			this -> capacity = 5;
			this -> data = new T[5];
		}
		bool isEmpty() const {
			return this -> size == 0;
		}
		T front() const{
			if(this -> isEmpty()) {
				cout << "Queue is empty ! ";
				return 0;
			}
			return this -> data[frontIndex];
		}
		int getSize() const {
			return this -> size;
		}
		void enqueue(T const &value) {
			if(this -> size == this -> capacity) {
				T * newData = new T[this -> capacity * 2];
				for(int i = this -> nextIndex; i < size; i ++) {
					newData[i] = data[i];
				}
				int counter = this -> size - this -> nextIndex;
				for(int i = 0; i < this -> nextIndex; i ++) {
					newData[counter] = data[i];
					counter ++;
				}
				delete [] this -> data;
				this -> data = newData;
				this -> frontIndex = 0;
				this -> nextIndex = size;
				this -> capacity = this -> capacity * 2;
			}
			this -> data[nextIndex] = value;
			nextIndex = (nextIndex + 1) % capacity;
			if(this -> frontIndex == -1) {
				this -> frontIndex ++;
			}
			size ++;
		}
		T dequeue() {
			if(this -> isEmpty()) {
				cout << "Queue is empty ! ";
				return 0;
			}
			T ans = this -> data[this -> frontIndex];
			this -> frontIndex = (this -> frontIndex + 1) % capacity;
			size --;
			if(size == 0) {
				this -> frontIndex = -1;
				this -> nextIndex = 0;
			}
			return ans;
		}
};
