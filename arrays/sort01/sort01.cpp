#include <iostream>
using namespace std;

void sort01(int arr[], int n) { 
	for(int i = 0, j = n - 1; i < j;) {
		if(arr[i] == 1 && arr[j] == 0){
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i ++;
			j --;
		}else if(arr[i] == 1 && arr[j] == 1){
			j --;
		}else if(arr[i] == 0) {
			i ++;
			continue;
		}
	}
return;
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
return;
}

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array in terms of 0 & 1: " << endl;
	for(int i = 0; i < n; i ++) { 
		cin >> arr[i];
	}
	sort01(arr, n);
	printArray(arr, n);
return 0;
}
