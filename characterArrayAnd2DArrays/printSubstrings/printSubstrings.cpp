#include <iostream>
using namespace std;

void printSubstrings(char arr[]) {
	for(int si = 0; arr[si] != '\0'; si ++) {
		for(int ei = si; arr[ei] != '\0'; ei ++) {
			for(int i = si; i <= ei; i ++) {
				cout << arr[i];
			}
			cout << endl;
		}
	}
}

int main() {
	char arr[100];
	cout << "Please enter the string: ";
	cin >> arr;
	printSubstrings(arr);
return 0;
}
