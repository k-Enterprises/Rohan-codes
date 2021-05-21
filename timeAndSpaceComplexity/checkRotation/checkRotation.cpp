#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value for element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int checkRotation(int arr[], int n) {
	int min = arr[0], minIndex = 0;
	for(int i = 0; i < n; i ++) {
		if(min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}
	}
return minIndex;
}

int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int * arr = new int[n];
	takeInput(arr, n);
	cout << "The array is rotated by: " << checkRotation(arr, n) << endl;
	delete [] arr;
return 0;
}
