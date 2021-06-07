#include <iostream>
#include <unordered_map>
using namespace std;

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int pairSum0(int * arr, int n) {
	int pairs = 0;
	unordered_map<int, int> map;
	for(int i = 0; i < n; i ++) {
		if(map.find(-arr[i]) != map.end()) { // find and end are iterators end: if i have 5 elemnets in map the end will point to 6 find: it will point me to the given keyVal
			pairs += map[-arr[i]];
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
	int numPairs = pairSum0(arr, size);
	cout << "The number of pairs which sums to 0 in this array is: " << numPairs << endl;
return 0;
}
