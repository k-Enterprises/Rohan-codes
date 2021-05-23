class DynamicArray {
	private :
	int * data;
	int capacity;
	int nextIndex;
	public :
	DynamicArray() {
		data = new int[5];
		capacity = 5;
		nextIndex = 0;
	}
	DynamicArray(DynamicArray const &d) {
		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i ++) {
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}
	void operator=(DynamicArray const &d) {
		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i ++) {
			this -> data[i] = d.data[i];
		}
		this -> capacity = d.capacity;
		this -> nextIndex = d.nextIndex;
	}
	void add(int element) {
		if(this -> nextIndex == this -> capacity) {
			int * newData = new int[this -> capacity * 2];
			for(int i = 0; i < this -> nextIndex; i ++) {
				newData[i] = this -> data[i];
			}
			delete [] this -> data;
			this -> data = newData;
		}
		this -> data[nextIndex] = element;
		this -> nextIndex ++;
	}
	void add(int i, int element) {
		if(i < this -> nextIndex) {
			this -> data[i] = element;
		}else if(i == this -> nextIndex){
			add(element);
		}else{
			return;
		}
	}
	void print() const {
		for(int i = 0; i < this -> nextIndex; i ++) {
			cout << this -> data[i] << " ";
		}
		cout << endl;
	}
};
