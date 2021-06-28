#include <iostream>
#include <climits>
using namespace std;

void takeInput(int ** arr, int m, int n) {
	for(int i = 0; i < m; i ++) {
		arr[i] = new int[n];
		for(int j = 0; j < n; j ++) {
			cout << "Enter the element " << i << ", " << j << " : ";
			cin >> arr[i][j];
		}
	}
return;
}

int helper(int ** arr, int m, int n, int i, int j, int ** list) {
	if(i >= m || j >= n) {
		return INT_MAX;
	} else if(i == m - 1 && j == n - 1) {
		return arr[i][j];
	}
	if(list[i][j] != INT_MIN) {
		return list[i][j];
	}
	int a = helper(arr, m, n, i, j + 1, list);
	int b = helper(arr, m, n, i + 1, j + 1, list);
	int c = helper(arr, m, n, i + 1, j, list);
	list[i][j] = arr[i][j] + min(a, min(b, c));
return list[i][j];
}

int minCostPath(int ** arr, int m, int n) {
	int ** list = new int*[m + 1];
	for(int i = 0; i < m + 1; i ++) {
		list[i] = new int[n + 1];
		for(int j = 0; j < n + 1; j ++) {
			list[i][j] = INT_MIN;
		}
	}
	int ans = helper(arr, m, n, 0, 0, list);
	for(int i = 0; i < m + 1; i ++) {
		delete [] list[i];
	}
	delete [] list;
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
	cout << "Min cost path to go to " << m - 1 << ", " << n - 1 << " is: " << ans << endl;
return 0;
}
