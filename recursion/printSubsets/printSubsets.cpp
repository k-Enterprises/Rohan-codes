#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >>  arr[i];
	}
return;
}

void printSubsets(int arr[], int n, int i, int output[], int j) {
	if(i == n) {
		for(int i = 0; i < j; i ++) {
			cout << output[i] << " ";
		}
		cout << endl;
		return;
	}
	output[j] = arr[i];
	printSubsets(arr, n, i + 1, output, j + 1);
	printSubsets(arr, n, i + 1, output, j);
}

int main() {
	int arr[100], output[100], n;
	cout << "Enter the size of the array: ";
	cin >> n;
	takeInput(arr, n);
	printSubsets(arr, n, 0, output, 0);
return 0;
}
