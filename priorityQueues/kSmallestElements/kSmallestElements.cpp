#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void printVector(vector<int> output) {
	for(int i = 0; i < output.size(); i ++) {
		cout << output.at(i) << " ";
	}
	cout << endl;
return;
}

vector<int> kSmallestElements(int * arr, int n, int k) {
	priority_queue<int> pq;
	for(int i = 0; i < k; i ++) {
		pq.push(arr[i]);
	}
	for(int i = k; i < n; i ++) {
		if(pq.top() > arr[i]) {
			pq.pop();
			pq.push(arr[i]);
		} else {
			continue;
		}
	}
	vector<int> output;
	while(!pq.empty()) {
		output.push_back(pq.top());
		pq.pop();
	}
return output;
}

int main() {
	int size, k;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	cout << "Enter the value of the k: ";
	cin >> k;
	vector<int> smallest = kSmallestElements(arr, size, k);
	cout << k << " smallest elements in the array are: ";
	printVector(smallest);
	delete [] arr;
return 0;
}
