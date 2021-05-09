#include <iostream>
#include <cstring>
using namespace std;

bool checkPermutation(char str1[], char str2[]) {
	int arr[256] = {0};
	if(strlen(str1) != strlen(str2)) {
		return false;
	}
	for(int i = 0; i < strlen(str1); i ++) {
		int index = int(str1[i]);
		arr[index] ++;
	}
	for(int j = 0; j < strlen(str2); j ++) {
		int index = int(str2[j]);
		arr[index] --;
	}
	for(int k = 0; k < 256; k ++) {
		if(arr[k] != 0) {
			return false;
		}
	}
return true;
}

int main() {
	char str1[100], str2[100];
	cout << "Please enter the string: ";
	cin >> str1;
	cout << "Enter second string: ";
	cin >> str2;
	cout << (checkPermutation(str1, str2) ? "true" : "false");
	cout << endl;
return 0;
}
