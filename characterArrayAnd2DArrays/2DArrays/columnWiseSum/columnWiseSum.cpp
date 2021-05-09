#include <iostream>
using namespace std;

void takeInput(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << "Enter the value for " << i << " " << j << ": ";
			cin >> arr[i][j];
		}
	}
return;
}

void columnWiseSum(int arr[][100], int m, int n) {
	for(int j = 0; j < n; j ++) {
		int columnSum = 0;
		for(int i = 0; i < m; i ++) {
			columnSum += arr[i][j];
		}
		cout << columnSum << " ";
	}
	cout << endl;
return;
}

int main() {
	int arr[100][100], m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(arr, m, n);
	columnWiseSum(arr, m, n);
return 0;
}
