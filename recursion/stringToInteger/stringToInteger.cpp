#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int length(int n) {
	int l = 0;
	while(n > 0) {
		l ++;
		n = n / 10;
	}
return l;
}

int stringToInteger(char str[]) {
	if(strlen(str) == 1) {
		return str[0] - '0';
	}
	int ans = stringToInteger(str + 1);
	int small = (str[0] - '0') * pow(10, length(ans)) + ans;
return small;
}

int main() {
	char str[100];
	cout << "Enter numeric string: ";
	cin >> str;
	cout << stringToInteger(str) << endl;
return 0;
}
