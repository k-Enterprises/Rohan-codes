#include <iostream>
#include <unordered_map>
using namespace std;

int maxFrequency(int * arr, int size) {
	int max = INT_MIN;
	int maxElement;
	unordered_map<int, int> seen;
	for(int i = 0; i < size; i ++) {
		seen[arr[i]] += 1;
	}
	for(int i = 0; i < size; i ++) {
		if(max < seen[arr[i]]) {
			max = seen[arr[i]];
		}
	}
	for(int i = 0; i < size; i ++) {
		if(seen[arr[i]] == max) {
			maxElement = arr[i];
			break;
		}
	}
return maxElement;
}

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	int ans = maxFrequency(arr, size);
	cout << "Number which has maximum frequency in the array is: " << ans << endl;
return 0;
}
