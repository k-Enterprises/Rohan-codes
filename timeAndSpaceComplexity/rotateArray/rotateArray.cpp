#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value for element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void rotateArray(int arr[], int n, int d) {
	int i = 0, j = n - 1;
	while(i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i ++;
		j --;
	}
	int k = 0, f = (n - d) - 1;
	while(k < f) {
		int temp = arr[k];
		arr[k] = arr[f];
		arr[f] = temp;
		k ++;
		f --;
	}
	int l = n - d, m = n - 1;
	while(l < m) {
		int temp = arr[l];
		arr[l] = arr[m];
		arr[m] = temp;
		l ++;
		m --;
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
	int n, d;
	cout << "Enter the size of array: ";
	cin >> n;
	int * arr = new int[n];
	takeInput(arr, n);
	cout << "Enter the value by which the array is to be rotated: ";
	cin >> d;
	rotateArray(arr, n, d);
	cout << "The rotated array is: ";
	printArray(arr, n);
	delete [] arr;
return 0;
}
