#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int element) {
	for(int i = 0; i < n; i ++) {
		if(arr[i] == element){
			cout << "Element found at index: " << i << endl;
			return;
			break;
		}
	}
	cout << -1 << endl;
}

int main() {
	int n, arr[100], element;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	cout << "Enter the element you want to find: ";
	cin >> element;
	linearSearch(arr, n, element);
}
