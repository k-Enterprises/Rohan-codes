#include <iostream>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void swap(int * arr, int l, int r) {
	int temp = arr[l];
	arr[l] = arr[r];
	arr[r] = temp;
return;
}

void printArray(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

void heapSort(int * arr, int n) {
	for(int i = 1; i < n; i ++) {
		int childIndex = i;
		while(childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;
			if(arr[childIndex] < arr[parentIndex]) {
				swap(arr, childIndex, parentIndex);
			} else {
				break;
			}
			childIndex = parentIndex;
		}
	}
	int i = n;
	while(i > 1) {
		swap(arr, 0, i - 1);
		i --;
		int parentIndex = 0;
		int l = (2 * parentIndex) + 1;
		int r = (2 * parentIndex) + 2;
		while(l < i) {
			int minIndex = parentIndex;
			if(arr[minIndex] > arr[l]) {
				minIndex = l;
			}
			if(r < i && arr[minIndex] > arr[r]) {
				minIndex = r;
			}
			if(minIndex == parentIndex) {
				break;
			}
			swap(arr, minIndex, parentIndex);
			parentIndex = minIndex;
			l = (2 * parentIndex) + 1;
			r = (2 * parentIndex) + 2;
		}
	}
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	cout << "Array before sorting: ";
	printArray(arr, size);
	heapSort(arr, size);
	cout << "Array after sorting: ";
	printArray(arr, size);
	delete [] arr;
return 0;
}
