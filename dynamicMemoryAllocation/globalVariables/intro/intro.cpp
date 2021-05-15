#include <iostream>
using namespace std;

int a; // global variable

void printA() {
	cout << a;
}

void increamentA() {
	a ++;
}

int main() {
	a = 10;
	printA();
	cout << endl;
	increamentA();
	printA();
	cout << endl;
return 0;
}
