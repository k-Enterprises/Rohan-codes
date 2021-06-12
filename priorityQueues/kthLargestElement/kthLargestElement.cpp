#include <iostream>
#include <queue>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int kthLargestElement(int * arr, int n, int k) {
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i = 0; i < k; i ++) {
		pq.push(arr[i]);
	}
	for(int i = k; i < n; i ++) {
		if(arr[i] > pq.top()) {
			pq.pop();
			pq.push(arr[i]);
		} else {
			continue;
		}
	}
return pq.top();
}

int main() {
	int size, k;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	cout << "Enter the value of k: ";
	cin >> k;
	int ans = kthLargestElement(arr, size, k);
	cout << k << "th largest element in the given array is: " << ans << endl;
	delete [] arr;
return 0;
}
