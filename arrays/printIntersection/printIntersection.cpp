#include <iostream>
#include <climits>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n ; i ++) {
		cin >> arr[i];
	}
return;
}

void printIntersection(int arr1[], int arr2[], int n, int m) {
	cout << "The intersection is: ";
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j ++) {
			if(arr1[i] == arr2[j]){
				cout << arr1[i] << " ";
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	cout << endl;
return;
}

int main() {
	int n, m, arr1[100], arr2[100];
	cout << "Enter the size of the first array: ";
	cin >> n;
	cout << "Enter the elements of first array: " << endl;
	takeInput(arr1, n);
	cout << "Enter the size of the second array: ";
	cin >> m;
	cout << "Enter the elements of second array: " << endl;
	takeInput(arr2, m);
	printIntersection(arr1, arr2, n, m);
return 0;
}
