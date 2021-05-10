#include <iostream>
using namespace std;

void removeDuplicates(char str[]) {
	int i = 1, j = 1;
	char last = str[0];
	for(;str[i] != '\0';) {
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

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	removeDuplicates(str);
	cout << "Final string: " << endl;
	cout << str << endl;
return 0;
}
