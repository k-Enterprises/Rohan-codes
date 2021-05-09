#include <iostream>
using namespace std;

void takeInput(int arr[][100], int m, int n) {
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << "Enter the value of " << i << " " << j << ": ";
			cin >> arr[i][j];
		}
	}
return;
}

void printSpiral(int arr[][100], int m, int n) {
	int rs = 0, cs = 0, re = m - 1, ce = n - 1, counter = 0;
	while(counter < (m * n)) {
		for(int j = cs; j <= ce; j ++) {
			cout << arr[rs][j] << " ";
			counter ++;
		}
		rs ++;
		for(int i = rs; i <= re; i ++) {
			cout << arr[i][ce] << " ";
			counter ++;
		}
		ce --;
		for(int j = ce; j >= cs; j --) {
			cout << arr[re][j] << " ";
			counter ++;
		}
		re --;
		for(int i = re; i >= rs; i --) {
			cout << arr[i][cs] << " ";
			counter ++;
		}
		cs ++;
	}
}

int main() {
	int arr[100][100], m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of column: ";
	cin >> n;
	takeInput(arr, m, n);
	cout << "The spiral print is: " << endl;
	printSpiral(arr, m, n);
	cout << endl;
return 0;
}
