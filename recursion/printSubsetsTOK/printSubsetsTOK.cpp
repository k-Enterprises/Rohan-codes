#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void printSubsetsToK(int arr[], int n, int i, int k, int output[], int j) {
	if(i == n) {
		if(k == 0){
			for(int lv = 0; lv < j; lv ++) {
				cout << output[lv] << " ";
			}
			cout << endl;
		}else{
			return;
		}
		return;
	}
	output[j] = arr[i];
	printSubsetsToK(arr, n, i + 1, k - arr[i], output, j + 1);
	printSubsetsToK(arr, n, i + 1, k, output, j);
return;
}

int main() {
	int arr[100], output[100], n, k;
	cout << "Enter the size of the array: ";
	cin >> n;
	takeInput(arr, n);
	cout << "Enter the value of k: ";
	cin >> k;
	printSubsetsToK(arr, n, 0, k, output, 0);
return 0;
}
