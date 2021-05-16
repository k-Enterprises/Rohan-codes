#include <iostream>
using namespace std;

int factorial(int n) {
	if(n == 1) {
		return 1;
	}
	int smallOutput = factorial(n - 1);
return n * smallOutput;
}

int main() {
	int n;
	cout << "Enter the number whose factorial you want to find: ";
	cin >> n;
	int output = factorial(n);
	cout << "The factorial is: "  << output << endl;
return 0;
}
