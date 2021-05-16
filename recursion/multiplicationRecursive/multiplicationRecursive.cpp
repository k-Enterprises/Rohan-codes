#include <iostream>
using namespace std;

int multiply(int m, int n) {
	if(n == 1) {
		return m;
	}
	int ans = multiply(m, n - 1);
return m + ans;
}

int main() {
	int m, n;
	cout << "Enter the two numbers: ";
	cin >> m >> n;
	cout << "The product is: " << multiply(m, n) << endl;
return 0;
}
