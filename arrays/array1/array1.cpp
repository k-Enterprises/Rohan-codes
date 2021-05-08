#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int input[100];
	for(int i = 0; i < n; i++){
		cout << "Enter element " << i << ": ";
		cin >> input[i];
	}
	for(int i = 0; i < n; i ++){
		cout << "Element " << i << ": ";
		cout << input[i] << endl;
	}
return 0;
}
