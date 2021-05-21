#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value for element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int findUnique(int arr[], int n) {
	int unique = 0;
	for(int i = 0; i < n; i ++) {
		unique = unique ^ arr[i];
	}
return unique;
}

int  main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int * arr = new int[n];
	takeInput(arr, n);
	cout << "the unique element in the array is: " << findUnique(arr, n) << endl;
	delete [] arr;
return 0;
}
