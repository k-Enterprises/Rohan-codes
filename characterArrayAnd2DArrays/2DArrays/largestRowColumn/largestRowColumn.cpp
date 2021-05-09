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

int rowWise(int arr[][100], int m, int n, int *index) {
	*index = 0;
	int max = 0;
	for(int i = 0; i < m; i ++) {
		int sum = 0;
		for(int j = 0; j < n; j ++) {
			sum += arr[i][j];
		}
		if(sum > max) {
			max = sum;
			*index = i;
		}
	}
return max;
}

int colWise(int arr[][100], int m, int n, int *index) {
	*index = 0;
	int max = 0;
	for(int j = 0; j < n; j ++) {
		int sum = 0;
		for(int i = 0; i < m; i ++) {
			sum += arr[i][j];
		}
		if(sum > max) {
			max = sum;
			*index = j;
		}
	}
return max;
}

int main() {
	int arr[100][100], m, n, index, index2;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(arr, m, n);
	int rowmax = rowWise(arr, m, n, &index);
	int colmax = colWise(arr, m, n, &index2);
	if(rowmax == colmax) {
		cout << "Row " << index << " " << rowmax << " " << endl;
	}else if(rowmax > colmax) {
		cout << "Row " << index << " " << rowmax << " " << endl;
	}else{
		cout << "Column " << index2 << " " << colmax << " " << endl;
	}
return 0;
}
