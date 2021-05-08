#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, arr[100];
	cout << "Enter the size of array: ";
	cin >> n;
	if(n == 0){
		cout << "NULL" << endl;
		return 0;
	}
	cout << "Enter the array elements: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = INT_MIN;
	for(int i = 1; i < n; i ++) {
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout << "The max value is: " << max << endl;
return 0;
}
