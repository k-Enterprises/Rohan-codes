#include <iostream>
using namespace std;

void arangeNumber(int arr[], int n) {
	for(int i = 0; i < n; i++){
		if(i < (n + 1) / 2){
			arr[i] = 2 * i + 1;
		}else{
			arr[i] = 2 * (n - i);
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
	arangeNumber(arr, n);
	printArray(arr, n);
return 0;
}
