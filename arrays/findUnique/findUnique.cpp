#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
	int ans;
	for(int i = 0; i < n; i ++) {
		int j = 0;
		for(; j < n; j ++) {
			if(i == j) {
				continue;
			}else if (arr[i] == arr[j]){
				break;
			}
		}
		if(j == n){
			ans = arr[i];
			break;
		}
	}
return ans;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	int unique = findUnique(arr, n);
	cout << unique << endl;
return 0;
}
