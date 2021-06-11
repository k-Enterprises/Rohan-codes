#include <iostream>
#include <queue>
using namespace std;

void printArray(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void kSortArray(int * arr, int n, int k) {
	priority_queue<int> pq;
	for(int i = 0; i < k; i ++) {
		pq.push(arr[i]);
	}
	int position = 0;
	for(int i = k; i < n; i ++) {
		arr[position] = pq.top();
		pq.pop();
		pq.push(arr[i]);
		position ++;
	}
	while(!pq.empty()) {
		arr[position] = pq.top();
		pq.pop();
		position ++;
	}
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	int k;
	cout << "Enter the value of the k: ";
	cin >> k;
	kSortArray(arr, size, k);
	cout << "Array after sorting: ";
	printArray(arr, size);
	delete [] arr;
return 0;
}
