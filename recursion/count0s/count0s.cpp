#include <iostream>
using namespace std;

int count(int n) {
	if(n == 0) {
		return 0;
	}
	int ans = count(n / 10);
	int smallOutput;
	if(n % 10 == 0) {
		smallOutput = 1;
	}else{
		smallOutput = 0;
	}
return ans + smallOutput;
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Number of 0s in the given number is: " << count(n) << endl;
return 0;
}
