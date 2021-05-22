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
		int min = std::min(this -> numerator, this -> denominator);
		for(int i = min; i >= 1; i --) {
			if(this -> numerator % i == 0 && this -> denominator % i == 0) {
				gcd = i;
				break;
			}
		}
		this -> numerator = this -> numerator / gcd;
		this -> denominator = this -> denominator / gcd;
	}
	void add(Fraction f) {
		this -> numerator = this -> numerator * f.denominator;
		this -> numerator = this -> numerator + (f.numerator * this -> denominator);
		this -> denominator = this -> denominator * f.denominator;
		simplify();
	}
	void multiply(Fraction f) {
		this -> numerator = this -> numerator * f.numerator;
		this -> denominator = this -> denominator * f.denominator;
		simplify();
	}
	void print() {
		cout << this -> numerator << "/" << this -> denominator << endl;
	}
};
