#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int * arr, int size) {
	vector<int> output;
	unordered_map<int, bool> seen;
	for(int i = 0; i < size; i ++) {
		if(seen.count(arr[i]) > 0) {
			continue;
		}
		output.push_back(arr[i]);
		seen[arr[i]] = true;
	}
return output;
}

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void printVector(vector<int> &output) {
	for(int i = 0; i < output.size(); i ++) {
		cout << output[i] << " ";
	}
	cout << endl;
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	vector<int> output = removeDuplicates(arr, size);
	printVector(output);
return 0;
}
