#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int returnSubset(int arr[], int n, int output[][200]) {
	if(n == 0) {
		output[0][0] = 0;
		return 1;
	}
	int smallAns = returnSubset(arr + 1, n - 1, output);
	for(int i = smallAns; i < 2 * smallAns; i ++) {
		int col = output[i - smallAns][0];
		output[i][0] = col + 1;
		output[i][1] = arr[0];
		for(int j = 1; j <= output[i - smallAns][0]; j ++) {
			output[i][j + 1] = output[i - smallAns][j];
		}
	}
return 2 * smallAns;
}

void printArray(int output[][200], int rows) {
	for(int i = 0; i < rows; i ++) {
		for(int j = 1; j <= output[i][0]; j ++) {
			cout << output[i][j] << " ";
		}
		cout << endl;
	}
return;
}

int main() {
	int arr[100], n, output[200][200];
	cout << "Enter the size of array: ";
	cin >> n;
	takeInput(arr, n);
	int rows = returnSubset(arr, n, output);
	printArray(output, rows);
return 0;
}
