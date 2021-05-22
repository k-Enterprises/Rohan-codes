#include <iostream>
#include <algorithm>
using namespace std;
#include "Fraction.cpp"

int main() {
	int n1, n2, d1, d2, ch;
	cout << "Enter the numerator for the first fraction: ";
	cin >> n1;
	cout << "Enter the denominator for the first fraction: ";
	cin >> d1;
	cout << "Enter the numerator for the second fraction: ";
	cin >> n2;
	cout << "Enter the denominator for the second fraction: ";
	cin >> d2;
	cout << "Enter 1 for addition and 2 for multiplication: ";
	cin >> ch;
	Fraction f1(n1, d1);
	Fraction f2(n2, d2);
	if(ch == 1) {
		f1.add(f2);
		cout << "The sum is: "; 
		f1.print();
	}else{
		f1.multiply(f2);
		cout << "The product is: ";
		f1.print();
	}
return 0;
}
