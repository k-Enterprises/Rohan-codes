#include <iostream>
using namespace std;

long stairCase(int n) {
	if(n == 0) {
		return 1;
	} else if(n < 0) {
		return 0;
	}
	int a = stairCase(n - 1);
	int b = stairCase(n - 2);
	int c = stairCase(n - 3);
return (a + b + c);
}

int main() {
	long n;
	cout << "Enter the number of the stairs: ";
	cin >> n;
	long ans = stairCase(n);
	cout << "Total number of ways to climb stair are: " << ans << endl;
return 0;
}
