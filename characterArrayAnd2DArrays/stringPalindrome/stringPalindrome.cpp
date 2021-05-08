#include <iostream>
using namespace std;

int length(char arr[]) {
	int len = 0;
	for(int i = 0; arr[i] != '\0'; i ++) {
		len ++;
	}
return len;
}

bool checkPalindrome(char arr[]) {
	int j = length(arr) - 1, i = 0;
	while(i <= j) {
		if(arr[i] != arr[j]) {
			return false;
		}
		i ++;
		j --;
	}
return true;
}

int main() {
	char arr[100];
	cout << "Please enter the string: ";
	cin >> arr;
	bool ans = checkPalindrome(arr);
	cout << (ans ? "true" : "false") << endl;;
return 0;
}
