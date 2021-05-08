#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr [i] << " ";
	}
	cout << endl;
return;
}

void reverseArray(int arr[], int n) {
	for(int i = 0, j = n - 1; i < j; i ++, j --){
		if(i == j){
			break;
		}
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
return;
}

int main() {
	int n;
	int arr[10] = {12, 24, 53, 84, 65, 44};
	printArray(arr, 6);
	reverseArray(arr, 6);
	printArray(arr, 6);
return 0;
}
