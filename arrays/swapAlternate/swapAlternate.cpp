#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n) {
	if(n % 2 != 0) {
		n = n - 1;
	}
	for(int i = 0; i < n; i += 2) {
		int temp;
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
return;
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++){
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	swapAlternate(arr, n);
	printArray(arr, n);
return 0;
}
