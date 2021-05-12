#include <iostream>
using namespace std;

void takeInput(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << "Enter the element for " << i << " " << j << ": ";
			cin >> arr[i][j];
		}
	}
return;
}

void sumIsRight(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		int sum = 0;
		for(int j = n - 1; j >= 0; j -- ) {
			int temp = arr[i][j];
			arr[i][j] = sum;
			sum += temp;
		}
	}
return;
}

void printArray(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
return;
}

int main() {
	int arr[100][100], m, n;
	cout << "Enter the value of rows: ";
	cin >> m;
	cout << "Enter the value of column: ";
	cin >> n;
	takeInput(arr, m, n);
	sumIsRight(arr, m, n);
	cout << "Final metrix form is: " << endl;
	printArray(arr, m, n);
return 0;
}
