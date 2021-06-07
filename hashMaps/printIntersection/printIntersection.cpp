#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void takeInput(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

void printIntersection(int * arr1, int size1, int * arr2, int size2) {
	sort(arr1, arr1 + size1);
	sort(arr2, arr2 + size2);
	unordered_map<int, int> map;
	for(int i = 0; i < size1; i ++) {
		map[arr1[i]] ++;
	}
	for(int i = 0; i < size2; i ++) {
		if(map[arr2[i]] > 0) {
			map[arr2[i]] --; // removing the frequency when element is there in the second array
			cout << arr2[i] << " ";
		}
	}
	cout << endl;
return;
}

int main() {
	int size1, size2;
	cout << "Enter the size of the first array: ";
	cin >> size1;
	int * arr1 = new int[size1];
	takeInput(arr1, size1);
	cout << "Eneter the size of the second array: ";
	cin >> size2;
	int * arr2 = new int[size2];
	takeInput(arr2, size2);
	cout << "Intersection of these to arrays are: ";
	printIntersection(arr1, size1, arr2, size2);
return 0;
}
