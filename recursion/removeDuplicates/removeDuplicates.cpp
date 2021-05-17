#include <iostream>
#include <cstring>
using namespace std;

void shift(char str[]) {
	int i;
	for(i = 1; i < strlen(str); i ++) {
		str[i] = str[i + 1];
	}
	str[i] = '\0';
}

void removeDuplicates(char str[]) {
	if(strlen(str) == 0) {
		return;
	}
	if(str[0] == str[1]){
		shift(str);
	}
	removeDuplicates(str + 1);
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	removeDuplicates(str);
	cout << "The final string is: ";
	cout << str << endl;
return 0;
}
