#include <iostream>
#include <climits>
using namespace std;

void takeInput(int ** arr, int m, int n) {
	for(int i = 0; i < m; i ++) {
		arr[i] = new int[n];
		for(int j = 0; j < n; j ++) {
			cout << "Enter the value of the element " << i << ", " << j << " : ";
			cin >> arr[i][j];
		}
	}
return;
}

int minCostPath(int ** input, int m, int n) {
	// create output array
	int ** output = new int*[m];
	for(int i = 0; i < m; i ++) {
		output[i] = new int[n];
	}
	// initialize last element as the last element in the input array
	output[m - 1][n - 1] = input[m - 1][n - 1];
	// fill the last row
	for(int j = n - 2; j >= 0; j --) {
		output[m - 1][j] = input[m - 1][j] + output[m - 1][j + 1];
	}
	// fill the last column
	for(int i = m - 2; i >= 0; i --) {
		output[i][n - 1] = input[i][n - 1] + output[i + 1][n - 1];
	}
	// fill rest of the array using the previous logic
	for(int i = m - 2; i >= 0; i --) {
		for(int j = n - 2; j >= 0; j --) {
			output[i][j] = min(output[i][j + 1], min(output[i + 1][j + 1], output[i + 1][j])) + input[i][j];
		}
	}
	int ans = output[0][0];
	for(int i = 0; i < m; i ++) {
		delete [] output[i];
	}
	delete [] output;
return ans;
}

int main() {
	int ** input, m, n;
	cout << "Enter the number of rows: " ;
	cin >> m;
	input = new int*[m];
	cout << "Enter the number of rows: ";
	cin >> n;
	takeInput(input, m, n);
	int ans = minCostPath(input, m, n);
	cout << "Min cost path to " << m - 1 << ", " << n - 1 << " is: " << ans << endl;
	for(int i = 0; i < m; i ++) {
		delete [] input[i];
	}
	delete [] input;
return 0;
}
