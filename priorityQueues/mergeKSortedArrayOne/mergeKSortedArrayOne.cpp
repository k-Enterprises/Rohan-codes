#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> mergeKSortedArray(vector<vector<int> *> input) {
	vector<int> output;
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i = 0; i < input.size(); i ++) {
		for(int j = 0; j < input[i] -> size(); j ++) {
			pq.push(input[i] -> at(j));
		}
	}
	while(!pq.empty()) {
		output.push_back(pq.top());
		pq.pop();
	}
return output;
}

void printVector(vector<int> output) {
	for(int i = 0; i < output.size(); i ++) {
		cout << output.at(i) << " "; 
	}
	cout << endl;
return;
}

int main() {
	int k;
	vector<vector<int> *> input;
	cout << "Enter the value of k: ";
	cin >> k;
	for(int i = 0; i < k; i ++) {
		int size;
		cout << "Enter the size of the " << i << "th array: ";
		cin >> size;
		vector<int> * v = new vector<int>;
		for(int j = 0; j < size; j ++) {
			int a;
			cout << "Enter the value of the element of " << i << "th array and index " << j << ": ";
			cin >> a;
			v -> push_back(a);
		}
		input.push_back(v);
	}
	vector<int> sorted = mergeKSortedArray(input);
	cout << "The final sorted array is: ";
	printVector(sorted);
return 0;
}
