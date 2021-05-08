#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	for(int i = 0; i < n - 1; i ++) {
		for(int j = 0; j < n - 1 - i; j ++) {
			if(arr[j] > arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int  n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter thr elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	bubbleSort(arr, n);
	cout << "Sorted array is: " << endl;
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return 0;
}
