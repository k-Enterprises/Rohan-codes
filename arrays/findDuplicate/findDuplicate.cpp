#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
	int ans = -1;
	for(int i = 0; i < n; i ++) { 
		for(int j = 0; j < n; j ++) { 
			if(j == i){
				continue;
			}else if(arr[i] == arr[j]){
				return arr[i];
			}
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
	int ans = findDuplicate(arr, n);
	cout << ans << endl;
}
