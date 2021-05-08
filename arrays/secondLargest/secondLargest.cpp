#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
	if(n <= 1) {
		return INT_MIN;
	}
	int max = INT_MIN, secMax = INT_MIN;
	for(int i = 0; i < n; i ++) {
		if(arr[i] > max && arr[i] > secMax) {
			secMax = max;
			max = arr[i];
		}else if(arr[i] < max && arr[i] > secMax) {
			secMax = arr[i];
		}
	}
return secMax;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	int ans = secondLargest(arr, n);
	cout << "The second largest in the array is: " << ans << endl;
return 0;
}
