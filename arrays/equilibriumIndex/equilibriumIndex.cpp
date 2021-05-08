#include <iostream>
using namespace std;

int equilibrium(int arr[], int n) {
	int left = 0, right = 0, i, j, index = 0, ans = -1;
	for(j = 1; j < n; j ++) {
		right += arr[j];
	}
	for(int k = 0; k < n; k ++) {
		if(left == right) {
			return k;
		}else{
			left += arr[k];
			right -= arr[k + 1];
		}
	}
return ans;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	int ans = equilibrium(arr, n);
	cout << ans << endl;
return 0;
}
