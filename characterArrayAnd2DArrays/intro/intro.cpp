#include <iostream>
using namespace std;

int lengthOfString(char str[]) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i ++) {
		count ++;
	}
return count;
}

int main() {
	char name[100];
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << endl;
	cout << "Length of string is: " << lengthOfString(name) << endl;
return 0;
}
