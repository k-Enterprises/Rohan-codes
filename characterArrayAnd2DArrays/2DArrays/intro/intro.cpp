#include <iostream>
using namespace std;

int main() {
	int arr[100][100], m, n;
	cout << "Enter the number of rows: ";
	cin >> m;
	cout << "Enter the number of columns: ";
	cin >> n;
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cin >> arr[i][j];
		}
	}
	cout << "The matrix array is: " << endl;
	for(int i = 0; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
return 0;
}
