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

void wavePrint(int arr[][100], int m, int n) {
	int i = 0;
	for(int j = 0; j < n; j ++) {
		if(i == m) {
			i = m - 1;
			while(i >= 0){
				cout << arr[i][j] << " ";
				i --;
			}
		}else{
			i = 0;
			while(i < m) {
				cout << arr[i][j] << " ";
				i ++;
			}
		}
	}
	cout << endl;
return;
}

int main() {
	int arr[100][100], m ,n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	takeInput(arr, m, n);
	cout << "The wave print is: " << endl;
	wavePrint(arr, m, n);
return 0;
}
