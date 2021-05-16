#include <iostream>
using namespace std;

int power(int x, int n) {
	if(n == 0) {
		return 1;
	}
	int smallOutput = power(x, n - 1);
return x * smallOutput;
}

int main() {
	int x, n;
	cout << "Enter the number: ";
	cin >> x;
	cout << "Enter the power: ";
	cin >> n;
	int output = power(x, n);
	cout << "The x ^ n is: "  << output << endl;
return 0;
}
