#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int d) {
	int arr2[d];
	for(int i = 0; i < d; i ++) {
		arr2[i] = arr[i];
	}
	for(int i = 0; i < n; i ++) {
		arr[i] = arr[i + d];
	}
	for(int i = n - d, j = 0; i < n; i ++, j ++){
		arr[i] = arr2[j];
	}
return;
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

int main() {
	int n, arr[100], d;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	cout << "Enter the value by which you want to rotate the array: ";
	cin >> d;
	rotateArray(arr, n, d);
	printArray(arr, n);
return 0;
}
