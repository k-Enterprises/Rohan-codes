#include <iostream>
using namespace std;

void replaceCharacters(char arr[], char r, char rw) {
	for(int i = 0; arr[i] != '\0'; i ++) {
		if(arr[i] == r) {
			arr[i] = rw;
		}
	}
return;
}

int main() {
	char arr[100], r, rw;
	cout << "Please enter the string: ";
	cin >> arr;
	cout << "Enter the character you want to replace: ";
	cin >> r;
	cout << "Enter the character you want to add instead of previous one: ";
	cin >> rw;
	replaceCharacters(arr, r, rw);
	cout << "The final string is: " << arr << endl;
return 0;
}
