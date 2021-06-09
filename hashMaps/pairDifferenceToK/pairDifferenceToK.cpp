#include <iostream>
#include <unordered_map>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the " << i << ": ";
		cin >> arr[i];
	}
return;
}

int pairDifferenceToK(int * arr, int n, int k) {
	unordered_map<int, int> map;
	int pairs = 0;
	for(int i = 0; i < n; i ++) {
		pairs += map[arr[i] + k];
		if(k != 0) {
			pairs += map[arr[i] - k];
		}
		map[arr[i]] ++;
	}
return pairs;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	int k;
	cout << "Enter the value of k: ";
	cin >> k;
	int numPairs = pairDifferenceToK(arr, size, k);
	cout << "Number of pairs with difference " << k << " is: " << numPairs << endl;
return 0;
}
