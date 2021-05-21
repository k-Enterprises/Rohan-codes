#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value for element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void merge(int arr[], int si, int ei) {
	int sample[1000];
	int mid = (si + ei) / 2;
	int i = si, j = mid + 1, k = 0;
	while(i <= mid && j <= ei){
		if(arr[i] < arr[j]) {
			sample[k] = arr[i];
			i ++;
			k ++;
		}else{
			sample[k] = arr[j];
			j ++;
			k ++;
		}
	}
	while(i <= mid) {
		sample[k] = arr[i];
		i ++;
		k ++;
	}
	while(j <= ei) {
		sample[k] = arr[j];
		j ++;
		k ++;
	}
	int m = 0;
	for(int i = si; i < ei; i ++) {
		arr[i] = sample[m];
		m ++;
	}
return;
}

void mergeSort(int arr[], int n, int si, int ei) {
	if(si >= ei) {
		return;
	}
	int mid = (si + ei) / 2;
	mergeSort(arr, n, si, mid);
	mergeSort(arr, n, mid + 1, ei);
	merge(arr, si, ei);
}

void printIntersection(int arr[], int n, int arr2[], int m) {
	mergeSort(arr, n, 0, n - 1);
	mergeSort(arr2, m, 0, m - 1);
	int i = 0, j = 0;
	while(i < n && j < m) {
		if(arr[i] == arr2[j]) {
			cout << arr[i] << " ";
			i ++;
			j ++;
		}else if(arr[i] < arr2[j]) {
			i ++;
		}else{
			j ++;
		}
	}
	cout << endl;
return;
}

int main() {
	int n, m;
	cout << "Enter the size of array: ";
	cin >> n;
	int * arr = new int[n];
	takeInput(arr, n);
	cout << "Enter the size of second array: ";
	cin >> m;
	int * arr2 = new int[m];
	takeInput(arr2, m);
	printIntersection(arr, n, arr2, m);
return 0;
}
