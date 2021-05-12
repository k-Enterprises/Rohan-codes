#include <iostream>
using namespace std;

void takeInput(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << "Enter the value of element " << i << " " << j << ": ";
			cin >> arr[i][j];
		}
	}
}

void printArray(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void reverseRow(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		int pointer = 0;
		for(int j = n - 1; j >= 0; j --) {
			if(pointer > j) {
				break;
			}
			int temp = arr[i][pointer];
			arr[i][pointer] = arr[i][j];
			arr[i][j] = temp;
			pointer ++;
		}
	}
}

int main() {
	int arr[100][100], m, n;
	cout << "Enter the value of rows: ";
	cin >> m;
	cout << "enter the value of column: ";
	cin >> n;
	takeInput(arr, m, n);
	cout << "Array before reversing: " << endl;
	printArray(arr, m, n);
	reverseRow(arr, m, n);
	cout << "Array after reversing: " << endl;
	printArray(arr, m, n);
	cout << endl;
return 0;
}
