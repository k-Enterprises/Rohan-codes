#include <iostream>
using namespace std;

void push0ToEnd(int arr[], int n) {
	int low = 0;
	for(int i = 0; i < n;) {
		if(arr[i] != 0) {
			int temp;
			temp = arr[low];
			arr[low] = arr[i];
			arr[i] = temp;
			low ++;
			i ++;
		}else{
			i ++;
		}
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
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	push0ToEnd(arr, n);
	printArray(arr, n);
return 0;
}
