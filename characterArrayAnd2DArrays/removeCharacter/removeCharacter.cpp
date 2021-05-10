#include <iostream>
#include <cstring>
using namespace std;

void removeCharacter(char str[], char x) {
	for(int i = 0; i < strlen(str);) {
		if(str[i] == x) {
			for(int j = i; j < strlen(str); j ++) {
				str[j] = str[j + 1];
			}
		}else{
			i ++;
		}
	}
}

int main() {
	char str[100], x;
	cout << "Enter the string: ";
	cin >> str;
	cout << "Enter the character you want to remove from string: ";
	cin >> x;
	removeCharacter(str, x);
	cout << "Final string is: " << endl;
	cout << str << endl;;
return 0;
}
