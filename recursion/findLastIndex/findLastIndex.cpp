#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int findX(int arr[], int n, int x) {
	if(n == 0) {
		return -1;
	}
	int ans = findX(arr + 1, n - 1, x);
	if(ans == -1) {
		if(arr[0] == x){
			return 0;
		}
		else{
			return -1;
		}
	}
return ans + 1;
}

int main() {
	int arr[100], n, x;
	cout << "Enter the size of the array: ";
	cin >> n;
	takeInput(arr, n);
	cout << "Enter the element you want to find: ";
	cin >> x;
	cout << "The element last occurence is at: "  << findX(arr, n , x) << endl;
return 0;
}
