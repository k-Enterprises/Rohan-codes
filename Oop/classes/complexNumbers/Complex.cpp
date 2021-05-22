class Complex {
	private: 
	int realPart;
	int imaginaryPart;
	public:
	Complex(int realPart, int imaginaryPart) {
		this -> realPart = realPart;
		this -> imaginaryPart = imaginaryPart;
	}
	void add(Complex n) {
		this -> realPart = this -> realPart + n.realPart;
		this -> imaginaryPart = this -> imaginaryPart + n.imaginaryPart;
	}
	void multiply(Complex n) {
		int r1 = this -> realPart * n.realPart;
		int i1 = this -> realPart * n.imaginaryPart;
		int i2 = this -> imaginaryPart * n.realPart;
		int r2 = (this -> imaginaryPart * n.imaginaryPart) * (-1);
		this -> realPart = r1 + r2;
		this -> imaginaryPart = i1 + i2;
	}
	void print() {
		cout << this -> realPart << " + " << "i" << this -> imaginaryPart << endl; 
	}
};
