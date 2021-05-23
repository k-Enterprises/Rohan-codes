class Fraction {
	private :
	int denominator;
	int numerator;
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
	Fraction operator+(Fraction const &f) const { // overloading "+" as no property change so const func
		int lcm = this -> denominator * f.denominator;
		int num = (this -> numerator * f.denominator) + (f.numerator * this -> denominator);
		Fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}
	Fraction operator*(Fraction const &f) const { // overloading "*" as no property change so const func
		int num = (this -> numerator * f.numerator);
		int deno = (this -> denominator * f.denominator);
		Fraction fNew(num, deno);
		fNew.simplify();
		return fNew;
	}
	void display() const {
		cout << this -> numerator << " / " << this -> denominator << endl;
	}
};
