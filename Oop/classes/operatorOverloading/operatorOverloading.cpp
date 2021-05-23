#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
	Fraction f1(2, 6);
	cout << "f1: ";
	f1.display();
	Fraction f2(9, 3);
	cout << "f2: ";
	f2.display();
	Fraction f3 = f1 + f2; // calling overloaded function "+"
	cout << "f3: ";
	f3.display();
	Fraction f4 = f1 * f2; // calling overloaded function "*"
	cout << "f4: ";
	f4.display();
}
