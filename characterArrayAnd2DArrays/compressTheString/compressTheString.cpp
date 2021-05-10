#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char str[]) {
	char last = str[0];
	int i = 1, j = 1;
	for(;str[i] != '\0';){
		if(str[i] == last) {
			i ++;
		}else{
			last = str[i];
			str[j] = str[i];
			i ++;
			j ++;
		}
	}
	str[j] = '\0';
return;
}

void compress(char str[]) {
	int count = '1';
	for(int i = 0; i < strlen(str); i ++){
		if(str[i] == str[i + 1]) {
			count ++;
		}else {
			if(count != '1') {
				str[i] = char(count);
			}
			count = '1';
		}
	}
	removeConsecutiveDuplicates(str);
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	compress(str);
	cout << "Final string: " << endl;
	cout << str << endl;
return 0;
}
