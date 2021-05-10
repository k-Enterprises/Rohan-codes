#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
	int i = 0, j = strlen(str) - 1;
	while(i < j) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i ++;
		j --;
	}
return;
}

void reverseWord(char str[]) {
	int previous = -1;
	for(int i = 0; i <= strlen(str); i ++) {
		if(str[i] == ' ' || str[i] == '\0') {
			reverse(str + previous + 1, str + i);
			previous = i;
		}
	}
}

int main() {
	char str[100];
	cout << "Please enter the string: ";
	cin.getline(str, 100);
	reverseString(str);
	reverseWord(str);
	cout << str << endl;
return 0;
}
