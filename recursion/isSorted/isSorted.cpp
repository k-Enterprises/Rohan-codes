#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of " << i << ": ";
		cin >> arr[i];
	}
}

bool checkSorted(int arr[], int n) {
	if(n == 0 || n == 1) {
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	bool check = checkSorted(arr + 1, n - 1);
return check;
}

int main() {
	int arr[100], n;
	cout << "Enter the size of the array: ";
	cin >> n;
	takeInput(arr, n);
	bool check = checkSorted(arr, n);
	cout << ((check) ? "true" : "false") << endl;
return 0;
}
