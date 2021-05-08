#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
return;
}

void mergeArray(int arr1[], int m, int arr2[], int n, int arr3[], int t) {
	int i = 0, j = 0, k = 0;
	while(i < m && j < n) {
		if(arr1[i] < arr2[j]) {
			arr3[k] = arr1[i];
			k ++;
			i ++;
		}else{
			arr3[k] = arr2[j];
			j ++;
			k ++;
		}
	}
	if(j == n) {
		while(i < m) {
			arr3[k] = arr1[i];
			i ++;
			k ++;
		}
	}else if(i == m) {
		while(j < n) {
			arr3[k] = arr2[j];
			j ++;
			k ++;
		}
	}
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

int main() {
	int m, arr1[100], n, arr2[100], arr3[200], k;
	cout << "Enter the size of first array: ";
	cin >> m;
	cout << "Enter the elements of first array: " << endl;
	takeInput(arr1, m);
	cout << "Enter the size of second array: ";
	cin >> n;
	cout << "Enter the elements of second array: " << endl;
	takeInput(arr2, n);
	k = m + n;
	mergeArray(arr1, m, arr2, n, arr3, k);
	cout << "Merged array is: " << endl;
	printArray(arr3, k);
return 0;
}
