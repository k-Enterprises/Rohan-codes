#include <iostream>
#include <cstring>
using namespace std;

void removeX(char str[]) {
	if(strlen(str) == 0) {
		return;
	}
	if(str[0] == 'x') {
		for(int i = 0; i < strlen(str); i ++) {
			str[i] = str[i + 1];
		}
	}
	removeX(str + 1);
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	cout << strlen(str) << endl;
	removeX(str);
	cout << str << endl;
	cout << strlen(str) << endl;
return 0;
}
