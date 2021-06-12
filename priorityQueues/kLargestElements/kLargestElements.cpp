#include <iostream>
#include <queue>
#include <vector>
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

vector<int> kLargestElements(int * arr, int n, int k) {
	priority_queue<int, vector<int>, greater<int> > pq; // default min priority queue syntax
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
	cout << "Enter the value of k: ";
	cin >> k;
	vector<int> output = kLargestElements(arr, size, k);
	cout << k << " largest elements in the given array are: ";
	printVector(output);
	delete [] arr;
return 0;
}
