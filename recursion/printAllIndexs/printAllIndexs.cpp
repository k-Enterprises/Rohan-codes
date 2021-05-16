#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int findIndexes(int arr[], int n, int x, int output[]) {
	if(n == 0) {
		return 0;
	}
	int ans = findIndexes(arr + 1, n - 1, x, output);
	for(int i = 0; i < ans; i ++) {
		output[i] ++;
	}
	if(arr[0] == x) {
		for(int i = 0; i < ans; i ++) {
			output[i + 1] = output[i];
			output[0] = 0;
		}
		return ans + 1;
	}else{
		return ans;
	}
}

int main() {
	int n, x;
	cout << "Enter the size of the array: ";
	cin >> n;
	int * arr = new int[n];
	int * output = new int[n];
	takeInput(arr, n);
	cout << "Enter the element you want to find: ";
	cin >> x;
	int size = findIndexes(arr, n, x, output);
	for(int i = 0; i < size; i ++) {
		cout << output[i] << " ";
	}
	cout << endl;
	delete [] arr;
	delete [] output;
}
