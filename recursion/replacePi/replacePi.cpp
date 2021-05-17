#include <iostream>
#include <cstring>
using namespace std;

void shift(char str[], int si) {
	int len = strlen(str);
	int c = si + 2;
	/*str[strlen(str) + 2] = '\0';
	cout << str[4] << endl;
	for(int i = strlen(str) - 1; i >= c; i --) {
		str[i + 2] = str[i];
	}*/
	int i;
	for(i = strlen(str) - 1; i >= c; i --) {
		str[i + 1] = str[i];
		str[i] = ' ';
	}
	str[len + 1] = '\0';
	int j;
	for(j = strlen(str) - 1; j >= c; j --) {
		str[j + 1] = str[j];
		str[j] = ' ';
	}
	str[len + 2] = '\0';
}

void replacePi(char str[], int si) {
	if(str[si] == '\0' || str[si + 1] == '\0') {
		return;
	}
	replacePi(str, si + 1);
	if(str[si] == 'p' && str[si + 1] == 'i') {
		shift(str, si);
		str[si] = '3';
		str[si + 1] = '.';
		str[si + 2] = '1';
		str[si + 3] = '4';
		return;
	}
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	int si = 0, ei = strlen(str) - 1;
	replacePi(str, 0);
	cout << str << endl;
return 0;
}
