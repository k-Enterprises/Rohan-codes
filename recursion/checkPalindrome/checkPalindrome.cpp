#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[], int si, int ei) {
	if(si == ei) {
		return true;
	}
	bool check;
	if(str[si] == str[ei]){
		check = checkPalindrome(str, si + 1, ei - 1);
	}else{
		return false;
	}
return check;
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	int si = 0, ei = strlen(str) - 1;
	bool check = checkPalindrome(str, si, ei);
	cout << ((check) ? "true" : "false") << endl;
return 0;
}
