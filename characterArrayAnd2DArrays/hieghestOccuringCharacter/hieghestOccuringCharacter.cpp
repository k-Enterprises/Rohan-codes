#include <iostream>
#include <climits>
using namespace std;

char frequency(char str[]) {
	int arr[256] = {0}, max = INT_MIN;
	char maxFreq = str[0];
	for(int i = 0; str[i] != '\0'; i ++) {
		int index = int(str[i]);
		arr[index] = arr[index] + 1;
	}
	for(int i = 0; i < 256; i ++) {
		if(arr[i] > max) {
			max = arr[i];
			maxFreq = char(i);
		}
	}
	if(max == 1) {
		return str[0];
	}else {
		return maxFreq;
	}
}

int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	char max = frequency(str);
	cout << max << endl;
return 0;
}
