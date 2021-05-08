#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void reverseEachWord(char arr[]) {
	int previous = 0;
	for(int i = 0; i <= strlen(arr); i ++) {
		if(arr[i] == ' ' || arr[i] == '\0') {
			reverse(arr + previous + 1, arr + i); // str + from index, str + to index
			previous = i + 1;
		}
	}
return;
}

int main() {
	char arr[100];
	cout << "Please enter the string: ";
	cin.getline(arr, 100);
	reverseEachWord(arr);
	cout << arr << endl;
return 0;
}
