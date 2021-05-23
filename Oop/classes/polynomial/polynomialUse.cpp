#include <iostream>
using namespace std;
#include "Polynomial.cpp"

int main() {
	int count1, count2;
	cout << "Enter the number of elements in the polynomial 1: ";
	cin >> count1;
	int * deg = new int[count1];
	int * coeff = new int[count1];
	for(int i = 0; i < count1; i ++) {
		cout << "Enter coefficient of element " << i << ": ";
		cin >> coeff[i];
	}
	for(int i = 0; i < count1; i ++) {
		cout << "Enter degree of element " << i << ": ";
		cin >> deg[i];
	}
	Polynomial first;
	for(int i = 0; i < count1; i ++) {
		first.setCoeff(deg[i], coeff[i]);
	}
	first.print();
	cout << "Enter the number of elements in the polynomial 2: ";
	cin >> count2;
	int * deg2 = new int[count2];
	int * coeff2 = new int[count2];
	for(int j = 0; j < count2; j ++) {
		cout << "Enter the coefficient of element: " << j << ": ";
		cin >> coeff2[j];
	}
	for(int j = 0; j < count2; j ++) {
		cout << "Enter the degree of element: " << j << ": ";
		cin >> deg2[j];
	}
	Polynomial second;
	for(int j = 0; j < count2; j ++) {
		second.setCoeff(deg2[j], coeff2[j]);
	}
	second.print();
	Polynomial third = first * second;
	third.print();
return 0;
}
