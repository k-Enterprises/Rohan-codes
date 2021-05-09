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

void printArray(int arr[][100], int m, int n){
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
return;
}

int main() {
	int a[100][100], m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(a, m, n);
	cout << "The metrix form of the array is: " << endl;
	printArray(a, m, n);
return 0;
}
