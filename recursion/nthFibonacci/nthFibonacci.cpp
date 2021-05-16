#include <iostream>
using namespace std;

int fibonacci(int n) {
	if(n == 0) {
		return 0;
	}else if(n == 1) {
		return 1;
	}
	int faith1 = fibonacci(n - 1);
	int faith2 = fibonacci(n - 2);
	int output = faith1 + faith2;
return output;
}

int main() {
	int n;
	cout << "Enter the number of fibonacci you want: ";
	cin >> n;
	cout << "The nth fibonacci is: " << fibonacci(n) << endl;
return 0;
}
