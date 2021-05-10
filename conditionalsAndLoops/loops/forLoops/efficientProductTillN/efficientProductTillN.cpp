#include <iostream>
using namespace std;

int main() {
	int n, mod = 1000000007;
	unsigned long long int product = 1;
	cout << "Enter the value of n: ";
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		product *= i;
		product %= mod;
	}
	cout << "The product is: " << product << endl;
return 0;
}
