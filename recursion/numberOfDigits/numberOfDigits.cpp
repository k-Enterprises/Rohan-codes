#include <iostream>
using namespace std;

int digits(int n) {
	if(n == 0) {
		return 0;
	}
	int sum = digits(n / 10);
return sum + 1;
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "The number of digits are: "  << digits(n) << endl;
return 0;
}
