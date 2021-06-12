#include <iostream>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

bool checkMaxHeap(int * arr, int n) {
	int parentIndex = 0;
	int leftChildIndex = (2 * parentIndex) + 1;
	int rightChildIndex = (2 * parentIndex) + 2;
	while(leftChildIndex < n) {
		if(arr[parentIndex] < arr[leftChildIndex] || arr[parentIndex] < arr[rightChildIndex]) {
			return false;
		} else {
			parentIndex ++;
			leftChildIndex = (2 * parentIndex) + 1;
			rightChildIndex = (2 * parentIndex) + 2;
		}
	}
return true;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	bool ans = checkMaxHeap(arr, size);
	cout << ((ans) ? "It is a max heap" : "It is not a max heap") << endl;
	delete [] arr;
return 0;
}
