class Fraction {
	private :
	int numerator;
	int denominator;
	public :
	Fraction(int numerator, int denominator) {
		this -> numerator = numerator;
		this -> denominator = denominator;
	}
	void simplify() {
		int gcd = 1;
		int min = std :: min(this -> numerator, this -> denominator);
		for(int i = min; i >= 1; i --) {
			if(this -> numerator % i == 0 && this -> denominator % i == 0) {
				gcd = i;
				break;
			}
		}
		this -> numerator = this -> numerator / gcd;
		this -> denominator = this -> denominator / gcd;
	}
	Fraction & operator++() { // using & so the temporary buffer will same as the first memory block for nesting
		this -> numerator = this -> numerator + this -> denominator;
		simplify();
	return *this;
	}
	void display() const {
		cout << this -> numerator << " / " << this -> denominator << endl;
	}
};
