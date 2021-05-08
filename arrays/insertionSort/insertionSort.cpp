#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i ++) {
		int current = arr[i], j;
		for(j = i - 1; j >= 0; j --) {
			if(current < arr[j]) {
				arr[j + 1] = arr[j];
			}else{
				break;
			}
		}
		arr[j + 1] = current;
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
	int n, arr[100];
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	insertionSort(arr, n);
	printArray(arr, n);
return 0;
}
