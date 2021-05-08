#include <iostream>
using namespace std;

int main() {
	int n, arr[100], sum = 0;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n; i ++) {
		sum = sum + arr[i];
	}
	cout << "The sum of all elements of array is: " << sum << endl;
return 0;
}
