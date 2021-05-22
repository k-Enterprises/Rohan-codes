#include <iostream>
using namespace std;
#include "Complex.cpp"

int main() {
	int r1, i1, r2, i2, ch;
	cout << "Enter the real part of the first number: ";
	cin >> r1;
	cout << "Enter the imaginary part of the first number: ";
	cin >> i1;
	cout << "Enter the real part of the second number: ";
	cin >> r2;
	cout << "Enter the imaginary part of the second number: ";
	cin >> i2;
	Complex c1(r1, i1);
	Complex c2(r2, i2);
	cout << "Enter 1 for addition and 2 for multiplication: ";
	cin >> ch;
	if(ch == 1) {
		c1.add(c2);
		cout << "The sum is: ";
		c1.print();
	}else{
		c1.multiply(c2);
		cout << "The product is: " ;
		c1.print();
	}
return 0;
}
