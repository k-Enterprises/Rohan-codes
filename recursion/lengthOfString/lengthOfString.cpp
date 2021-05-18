#include <iostream>
using namespace std;

int length(char str[]) {
	if(str[0] == '\0') {
		return 0;
	}
	int ans = length(str + 1);
return ans + 1;
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	cout << length(str) << endl;
return 0;
}
