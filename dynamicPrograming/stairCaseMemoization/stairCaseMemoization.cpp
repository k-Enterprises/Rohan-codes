#include <iostream>
using namespace std;

long helper(long n, long * ways) {
	if(n == 0) {
		return 1;
	} else if(n < 0) {
		return 0;
	}
	if(ways[n] != -1) {
		return ways[n];
	}
	int a = helper(n - 1, ways);
	int b = helper(n - 2, ways);
	int c = helper(n - 3, ways);
	ways[n] = a + b + c;
return ways[n];
}

long stairCase(long n) {
	long * ways = new long[n + 1];
	for(int i = 0; i < n + 1; i ++) {
		ways[i] = -1;
	}
	long ans = helper(n, ways);
	delete [] ways;
return ans;
}

int main() {
	long n;
	cout << "Enter the number of stairs: ";
	cin >> n;
	long ans = stairCase(n);
	cout << "Total number of ways to climb stairs are: " << ans << endl;
}
