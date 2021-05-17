#include <iostream>
#include <cstring>
using namespace std;

void replace(char str[], char a, char x) {
	if(strlen(str) == 0) {
		return;
	}
	replace(str + 1, a, x);
	if(str[0] == a){
		str[0] = x;
	}
}

int main() {
	char str[100], a, x;
	cout << "Enter the string: ";
	cin >> str;
	cout << "Enter the string you want to replace: ";
	cin >> a;
	cout << "Enter the string you want to plug: ";
	cin >> x;
	replace(str, a, x);
	cout << "The final string is: " << endl;
	cout << str << endl;
return 0;
}
