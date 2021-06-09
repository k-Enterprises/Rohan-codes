#include <iostream>
#include <map>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int longestSubsequenceZeroSum(int * arr, int n) {
	int size = INT_MIN, sum = 0;
	map<int, int> map;
	for(int i = 0; i < n; i ++) {
		sum += arr[i];
		if(sum == 0) {
			int range = i + 1;
			if(range > size) {
				size = range;
			}
		} else if(map.count(sum) != 0) {
			int range = i - map[sum];
			if(range > size) {
				size = range;
			}
		}
		map[sum] = i;
	}
return size;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	int sequenceSize = longestSubsequenceZeroSum(arr, size);
	cout << "The size of longest subsequence whose sum is zero is: " << sequenceSize << endl;
return 0;
}
