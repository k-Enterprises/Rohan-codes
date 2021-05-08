#include <iostream>
#include <climits> 
using namespace std;

void selectionSort(int arr[], int n) {
	for(int i = 0; i < n - 1; i ++) {
		int min = arr[i], index = i;
		for(int j = i + 1; j < n; j ++) {
			if(min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		int temp;
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
return;
}
int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of the array: " <<endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	selectionSort(arr, n);
	cout << "Sorted array is: " << endl;
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return 0;
}
