#include <iostream>
using namespace std;

int checkRotation(int arr[], int n) {
	int ans = 0;
	for(int i = 1; i < n; i ++) {
		if(arr[i] < arr[i - 1]) {
			ans = n - i;
			break;
		}
	}
return ans;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	int ans = checkRotation(arr, n);
	cout << "The array is rotated by: " << ans << endl;
return 0;
}
