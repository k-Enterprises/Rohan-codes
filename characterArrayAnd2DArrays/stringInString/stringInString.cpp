#include <iostream>
#include <cstring>
using namespace std;

int stringInString(char str1[], char str2[]) {
	int index = -1;
	int length = strlen(str2);
	for(int i = 0; str1[i] != '\0'; i ++) {
		int j;
		for(j = 0; str2[j] != '\0'; j ++) {
			if(str1[i + j] != str2[j]) {
				break;
			}
		}
		if(j == length) {
			return i;
		}
	}
return index;
}

int main() {
	char str1[100], str2[100];
	cout << "Enter the first string: ";
	cin >> str1;
	cout << "Enter the second string: ";
	cin >> str2;
	int index = stringInString(str1, str2);
	if(index == -1) {
		cout << "The second string was not the part of the first string" << endl;
	}else{
		cout << "The substring index starts from: " << index << " in the first string" << endl;
	}
return 0;
}
