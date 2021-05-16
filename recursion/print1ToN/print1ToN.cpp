#include <iostream>
using namespace std;

void printN(int n) {
	if(n == 1) {
		cout << n << endl;
		return;
	}
	printN(n - 1);
	cout << n << endl;
return;
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	printN(n);
return 0;
}
