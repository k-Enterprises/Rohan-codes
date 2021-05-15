#include <iostream>
using namespace std;

int sum(int arr[], int size, int si = 0) { /* by default the value of si is 0 but it will change if we send 3rd 
											parameter from the main */
	int sum = 0;
	for(int i = si; i < size; i ++) {
		sum += arr[i];
	}
return sum;
}

int sum2(int a, int b = 0, int c = 0, int d = 0) { // always start giving default values from right most arguments
	return a + b + c + d;
}

int main() {
	int arr[10];
	cout << "Enter the elemets of array: " << endl;
	for(int i = 0; i < 10; i ++) {
		cin >> arr[i];
	}
	cout << sum(arr, 10, 1) << endl;
return 0;
}
