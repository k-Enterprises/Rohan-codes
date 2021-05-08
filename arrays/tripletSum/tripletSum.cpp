#include <iostream>
using namespace std;

void tripletSum(int arr[], int n, int x) {
	int count = 0;
	for(int i = 0; i < n; i ++){
		for(int j = i + 1; j < n; j ++) {
			for(int k = j + 1; k < n; k ++) {
				if(arr[i] + arr[j] + arr[k] == x) {
					count ++;
				}
			}
		}
	}
	cout << count << endl;
return;
}

int main() {
	int n, arr[100], x;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	cout << "Enter the value of X: ";
	cin >> x;
	tripletSum(arr, n, x);
return 0;
}
