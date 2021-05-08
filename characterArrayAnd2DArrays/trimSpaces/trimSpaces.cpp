#include <iostream>
using namespace std;

void trimSpaces(char arr[]) {
	int i = 0, j = 0;
	for(; arr[i] != '\0'; i ++) {
		if(arr[i] != ' ') {
			arr[j] = arr[i];
			j ++;
		}
	}
	arr[j] = '\0';
}

int main() {
	char arr[100];
	cout << "Please enter the array: ";
	cin.getline(arr, 100);
	trimSpaces(arr);
	cout << arr << endl;
return 0;
}
