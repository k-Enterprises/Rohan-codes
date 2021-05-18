#include <iostream>
using namespace std;

void takeInput(int arr[], int n){
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
}

void swap(int arr[], int a, int b) {
	int temp = arr[b];
	arr[b] = arr[a];
	arr[a] = temp;
return;
}

int partition(int arr[], int si, int ei) {
	int pivot = arr[si], sec = 0;
	for(int i = si; i < ei; i ++) {
		if(arr[i] < pivot) {
			sec ++;
		}
	}
	swap(arr, si, si + sec);
	int i = si, j = ei;
	while(i < j) {
		if(arr[i] <= arr[si + sec]) {
			i ++;
		}else if(arr[j] > arr[si + sec]){
			j --;
		}else{
			swap(arr, i, j);
		}
	}
return (si + sec);
}

void quickSort(int arr[], int si, int ei) {
	if(si >= ei) {
		return;
	}
	int c = partition(arr, si, ei);
	quickSort(arr, si,  c - 1);
	quickSort(arr, c + 1, ei);
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[100], n;
	cout << "Enter the size of array: ";
	cin >> n;
	takeInput(arr, n);
	quickSort(arr, 0, n - 1);
	printArray(arr, n);
return 0;
}
