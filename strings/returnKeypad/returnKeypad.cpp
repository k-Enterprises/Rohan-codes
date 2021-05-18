#include <iostream>
using namespace std;

int returnKeypad(int n, string output[], string keypad[]) {
	if(n == 0) {
		output[0] = "";
		return 1;
	}
	int myNumber = n % 10;
	int smallOutput = returnKeypad(n / 10, output, keypad);
	string myString = keypad[myNumber - 2];
	for(int i = myString.size() - 1; i >= 0; i --) {
		for(int j = 0; j < smallOutput; j ++) {
			output[i * smallOutput + j] = myString[i] + output[j];
		}
	}
return myString.size() * smallOutput;
}

void printArray(string output[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << output[i] << endl;
	}
}

int main() {
	string keypad[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	string output[1000];
	int input;
	cout << "Enter the number: ";
	cin >> input;
	int size = returnKeypad(input, output, keypad);
	printArray(output, size);
}
