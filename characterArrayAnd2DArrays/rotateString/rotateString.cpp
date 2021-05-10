#include <iostream>
#include <cstring>
using namespace std;

void rotateString(char str[], int n) {
	int i = 0;
	while(i < n) {
		char last = str[strlen(str) - 1];
		for(int j = strlen(str) - 1; j >= 0; j --) {
			str[j] = str[j - 1];
		}
		str[0] = last;
		i ++;
	}
}

int main() {
	int n;
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	cout << "Enter the number by which you want to rotate string: ";
	cin >> n;
	rotateString(str, n);
	cout << "The array after the rotataion is: " << endl;
	cout << str << endl;
return 0;
}
