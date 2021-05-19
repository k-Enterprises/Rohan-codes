#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int binarySearch(int arr[], int x, int si, int ei) {
	if(si > ei) {
		return -1;
	}
	int mid = (si + ei) / 2, ans;
	if(arr[mid] == x) {
		return mid;
	}else{
		if(arr[mid] > x) {
			ans = binarySearch(arr, x, si, mid - 1);
		}else{
			ans = binarySearch(arr, x, mid + 1, ei);
		}
	}
return ans;
}

int main() {
	int n, x;
	cout << "Enter the size of array: ";
	cin >> n;
	int *arr = new int[n];
	takeInput(arr, n);
	cout << "Enter the element you want to find: ";
	cin >> x;
	int ans = binarySearch(arr, x, 0, n - 1);
	cout << "The element is present at index: " << ans << endl;
	delete [] arr;
return 0;
}
