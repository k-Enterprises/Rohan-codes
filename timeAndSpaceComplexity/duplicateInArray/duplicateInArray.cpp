#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value for element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int findDuplicate(int arr[], int n) {
	int totalSum = 0, remainingSum = 0;
	for(int i = 0; i < n; i ++) {
		totalSum += arr[i];
	}
	for(int i = 1; i <= n - 2; i ++) {
		remainingSum += i;
	}
return totalSum - remainingSum;
}

int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int * arr = new int[n];
	takeInput(arr, n);
	cout << "The duplicate element in the array is: " << findDuplicate(arr, n) << endl;
	delete [] arr;
return 0;
}
