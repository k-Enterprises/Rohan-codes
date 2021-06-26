#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int minCount(int n) {
	int * arr = new int[n + 1];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	for(int i = 4; i < n + 1; i ++) {
		arr[i] = INT_MAX;
		for(int j = 1; j <= sqrt(i); j ++) {
			arr[i] = min(arr[i], arr[i - (j * j)]);
		}
		arr[i] += 1;
	}
	int ans = arr[n];
	delete [] arr;
return ans;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int ans = minCount(n);
	cout << "Min count of sum of squares to " << n << " is: " << ans << endl;
return 0;
}
