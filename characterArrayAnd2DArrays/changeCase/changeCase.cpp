#include <iostream>
using namespace std;

void changeCase(char str[]) {
	for(int i = 0; str[i] != '\0'; i ++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
return;
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	changeCase(str);
	cout << "The changed string is: " << endl;
	cout << str << endl;
return 0;
}
