#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
	for(int i = 0; i < n ; i ++) {
		cin >> arr[i];
	}
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	inputArray(arr, n);
	cout << "The array is: " << endl;
	printArray(arr, n);
return 0;
}
