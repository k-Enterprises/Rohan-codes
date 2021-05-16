#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

bool findX(int arr[], int n, int x) {
	bool check;
	if(n == 0) {
		return false;
	}
	if(arr[0] == x) {
		return true;
	}else{
		check = findX(arr + 1, n - 1, x);
	}
return check;
}

int main() {
	int arr[100], n, x;
	cout << "Enter the size of array: ";
	cin >> n;
	takeInput(arr, n);
	cout << "Enter the element you want to check: ";
	cin >> x;
	bool check = findX(arr, n, x);
	cout << ((check) ? "true" : "false") << endl;
return 0;
}
