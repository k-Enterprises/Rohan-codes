#include <iostream>
using namespace std;

void takeInput(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << "Enter the elements of " << i << " " << j << "in 0s and 1s: ";
			cin >> arr[i][j];
		}
	}
return;
}

int max(int arr[][100], int m, int n) {
	int sum, index = 0, max = 0;
	for(int i = 0; i < m; i ++) {
		sum = 0;
		for(int j = 0; j < n; j ++) {
			if(arr[i][j] == 1) {
				sum += 1;
			}
		}
		if(sum > max) {
			max = sum;
			index = i;
		}
	}
return index;
}

int main() {
	int arr[100][100], m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(arr, m, n);
	int max1s = max(arr, m, n);
	cout << "Max 1s row index is: ";
	cout << max1s << endl;
return 0;
}
