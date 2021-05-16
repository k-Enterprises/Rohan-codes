#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the element " << i << ": ";
		cin >> arr[i];
	}
}

int sum(int arr[], int n) {
	if(n == 1) {
		return arr[0];
	}
	int faith = sum(arr + 1, n - 1);
	int sumAns = arr[0] + faith;
return sumAns;
}

int main() {
	int arr[100], n;
	cout << "Enter the size of array: ";
	cin >> n;
	takeInput(arr, n);
	cout << "The sum of elements of array is: "  << sum(arr, n) << endl;
return 0;
}
