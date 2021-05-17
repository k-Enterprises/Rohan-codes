#include <iostream>
using namespace std;

int sumOfDigit(int n) {
	if(n == 0) {
		return 0;
	}
	int digit = n % 10;
	int ans = sumOfDigit(n / 10);
return digit + ans;
}

int main() {
	int n;
	cout << "Enter a digit: ";
	cin >> n;
	cout << "The sum of digit is: " << sumOfDigit(n) << endl;
return 0;
}
