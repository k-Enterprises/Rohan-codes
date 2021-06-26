#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

int helper(int n, int * arr) {
	if(n <= 3) {
		return n;
	}
	int count = n;
	if(arr[n] != -1) {
		return arr[n];
	}
	for(int i = 1; i <= sqrt(n); i ++) {
		int temp = i * i;
		count = min(count, 1 + helper(n - temp, arr));
	}
	arr[n] = count;
return arr[n];
}

int minCount(int n) {
	int * arr = new int[n + 1];
	for(int i = 0; i < n + 1; i ++) {
		arr[i] = -1;
	}
	int ans = helper(n, arr);
	delete [] arr;
return ans;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int ans = minCount(n);
	cout << "Min count of squares to " << n << " is: " << ans << endl;
return 0;
}
