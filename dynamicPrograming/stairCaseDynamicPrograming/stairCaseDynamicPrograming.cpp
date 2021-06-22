#include <iostream>
using namespace std;

long stairCase(int n) {
	long * ways = new long[n + 1];
	if(n == 0) {
		return 0;
	}
	if(n == 1 || n == 2) {
		return n;
	}
	ways[0] = 1;
	ways[1] = 1;
	ways[2] = 2;
	for(int i = 3; i < n + 1; i ++) {
		ways[i] = ways[i - 1] + ways[i - 2] + ways[i - 3];
	}
	long ans = ways[n];
	delete [] ways;
return ans;
}

int main() {
	int n;
	cout << "Enter the number of steps: ";
	cin >> n;
	long ans = stairCase(n);
	cout << "Total number of ways to climb stairs are: " << ans << endl;
return 0;
}
