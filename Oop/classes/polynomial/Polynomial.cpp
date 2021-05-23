class Polynomial {
	private :
	int * degCoeff;
	int capacity;
	public :
	// default cunstructor
	Polynomial() {
		this -> degCoeff = new int[5];
		this -> capacity = 5;
		for(int i = 0; i < capacity; i ++) {
			degCoeff[i] = 0;
		}
	}
	// copy cunstructor
	Polynomial(Polynomial const &p) {
		this -> degCoeff = new int[p.capacity];
		for(int i = 0; i < p.capacity; i ++) {
			this -> degCoeff[i] = p.degCoeff[i];
		}
		this -> capacity = p.capacity;
	}
	// copy assignment operator
	void operator=(Polynomial const &p) {
		this -> degCoeff = new int[p.capacity];
		for(int i = 0; i < p.capacity; i ++) {
			this -> degCoeff[i] = p.degCoeff[i];
		}
		this -> capacity = p.capacity;
	}
	// print function
	void print() {
		for(int i = 0; i < this -> capacity; i ++) {
			if(degCoeff[i] != 0) {
				cout << this -> degCoeff[i] << "x" << i << " ";
			}
		}
		cout << endl;
	}
	// set coefficient 
	void setCoeff(int index, int element) {
		if(index < this -> capacity) {
			this -> degCoeff[index] = element;
		}else{
			int * newDegCoeff = new int[this -> capacity * 2];
			for(int i = 0; i < this -> capacity * 2; i ++) {
				newDegCoeff[i] = 0;
			}
			for(int i = 0; i < this -> capacity; i ++) {
				newDegCoeff[i] = this -> degCoeff[i];
			}
			delete [] this -> degCoeff;
			this -> degCoeff = newDegCoeff;
			this -> degCoeff[index] = element;
			this -> capacity = this -> capacity * 2;
		}
	}
	// overloading + 
	Polynomial operator+(Polynomial const &p) const {
		Polynomial ans;
		for(int i = 0; i < std :: max(this -> capacity, p.capacity); i ++) {
			ans.setCoeff(i, this -> degCoeff[i] + p.degCoeff[i]);
		}
	return ans;
	}
	// overloading -
	Polynomial operator-(Polynomial const &p) const {
		Polynomial ans;
		for(int i = 0; i < std :: max(this -> capacity, p.capacity); i ++) {
			ans.setCoeff(i, this -> degCoeff[i] - p.degCoeff[i]);
		}
	return ans;
	}
	// get index
	int getIndex(int index) {
		if(index > this -> capacity) {
			return 0;
		}else{
			return this -> degCoeff[index];
		}
	}
	// overloading *
	Polynomial operator*(Polynomial const &p) const {
		Polynomial ans;
		for(int i = 0; i < this -> capacity; i ++) {
			for(int j = 0; j < p.capacity; j ++) {
				int index = i + j;
				int coeff = ans.getIndex(index) + (this -> degCoeff[i] * p.degCoeff[j]);
				ans.setCoeff(index, coeff);
			}
		}
	return ans;
	}
};
