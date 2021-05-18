#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n ; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
}

void mergeArray(int arr[], int si, int ei) {
	int mid = (si + ei) / 2;
	int l[100], i = si, j = mid + 1, k = 0;
	while(i <= mid && j <= ei) {
		if(arr[i] <= arr[j]) {
			l[k] = arr[i];
			i ++;
		}else{
			l[k] = arr[j];
			j ++;
		}
		k ++;
	}
	while(i <= mid) {
		l[k] = arr[i];
		i ++;
		k ++;
	}
	while(j <= ei) {
		l[k] = arr[j];
		j ++;
		k ++;
	}
	int m = 0;
	for(int i = si; i <= ei; i ++){
		arr[i] = l[m];
		m ++;
	}
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void mergeSort(int arr[], int si, int ei) {
	if(si == ei || si > ei) {
		return;
	}
	int mid = (si + ei) / 2;
	mergeSort(arr, si, mid);
	mergeSort(arr, mid + 1, ei);
	mergeArray(arr, si, ei);
}

int main() {
	int arr[100], n;
	cout << "Enter the size of the array: ";
	cin >> n;
	takeInput(arr, n);
	mergeSort(arr, 0, n - 1);
	printArray(arr, n);
return 0;
}
