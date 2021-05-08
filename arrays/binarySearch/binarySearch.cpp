#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
	int ans = -1;
	int start = 0, end = n - 1;
	while(start <= end){
		int mid = (start + end) / 2;
		if(arr[mid] == x){
			ans = mid;
			break;
		}else if(arr[mid] > x) {
			end = mid - 1;
		}else if(arr[mid] < x) {
			start = mid + 1;
		}
	}
return ans;
}

int main() {
	int n, arr[100], x, ans;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array in sorted manner: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	cout << "Enter the element you want to find: ";
	cin >> x;
	ans = binarySearch(arr, n, x);
	if(ans == -1) {
		cout << "Element was not found! " << endl;
	}else{
		cout << "The element found at: " << ans << " index" << endl;
	}
return 0;
}
