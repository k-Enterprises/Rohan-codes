#include <iostream>
#include <climits>
using namespace std;

void takeInput(int ** arr, int m, int n) {
	for(int i = 0; i < m; i ++) {
		arr[i] = new int[n];
		for(int j = 0; j < n; j ++) {
			cout << "Enter the value of the element " << i << " " << j << ": ";
			cin >> arr[i][j];
		}
	}
}

int helper(int ** arr, int m, int n, int i, int j) {
	if(i >= m || j >= n) {
		return INT_MAX;
	} else if(i == m - 1 && j == n - 1) {
		return arr[i][j];
	}
	int a = helper(arr, m, n, i, j + 1);
	int b = helper(arr, m, n, i + 1, j + 1);
	int c = helper(arr, m, n, i + 1, j);
	int ans = arr[i][j] + min(a, min(b, c));
return ans;
}

int minCostPath(int ** arr, int m, int n) {
	int ans = helper(arr, m, n, 0, 0);
return ans;
}

int main() {
	int ** arr, m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	arr = new int*[m];
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(arr, m, n);
	int ans = minCostPath(arr, m, n);
	for(int i = 0; i < m; i ++) {
		delete [] arr[i];
	}
	delete [] arr;
	cout << "Min Cost Path To " << m - 1 << ", " << n - 1 << " is: " << ans << endl;
return 0;
}
