#include <iostream>
#include <cstring>
using namespace std;

void shift(char str[], int start) {
	int len = strlen(str);
	for(int i = strlen(str) - 1; i >= start + 1; i --) {
		str[i + 1] = str[i];
		str[i] = ' ';
	}
	str[len + 1] = '\0';
}

void pairStar(char str[], int start) {
	if(start == strlen(str)) {
		return;
	}
	if(str[start] == str[start + 1]) {
		shift(str, start);
		str[start + 1] = '*';
	}
	pairStar(str, start + 1);
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	pairStar(str, 0);
	cout << "The final string is: " << endl;
	cout << str << endl;
return 0;
}
