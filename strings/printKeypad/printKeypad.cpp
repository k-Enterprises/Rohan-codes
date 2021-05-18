#include <iostream>
using namespace std;

void printKeypad(int n, string output, string keypad[]) {
	if(n == 0) {
		cout << output << endl;
		return;
	}
	int myNumber = n % 10;
	string options = keypad[myNumber - 2];
	for(int i = 0; i < options.size(); i ++) {
		printKeypad(n / 10, options[i] + output, keypad);
	}
}

int main() {
	int input;
	cout << "Enter the number: ";
	cin >> input;
	string keypad[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	string output = "";
	printKeypad(input, output, keypad);
return 0;
}
