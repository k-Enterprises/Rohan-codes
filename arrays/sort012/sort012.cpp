#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
	int nz = 0, nt = n - 1;
	for(int i = 0; i <= nt;) {
		if(arr[i] == 0) {
			int temp;
			temp = arr[i];
			arr[i] = arr[nz];
			arr[nz] = temp;
			nz ++;
			i ++;
		}else if(arr[i] == 2) {
			int temp;
			temp = arr[i];
			arr[i] = arr[nt];
			arr[nt] = temp;
			nt --;
		}else{
			i ++;
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
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	sort012(arr, n);
	printArray(arr, n);
return 0;
}
