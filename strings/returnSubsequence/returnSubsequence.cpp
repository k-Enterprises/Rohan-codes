#include <iostream>
#include <cmath>
using namespace std;

int subsequences(string input, string output[]) {
	if(input.size() == 0) {
		output[0] = "";
		return 1;
	}
	string smallString = input.substr(1);
	int smallOutput = subsequences(smallString, output);
	for(int i = 0; i < smallOutput; i ++) {
		output[i + smallOutput] = input[0] + output[i];
	}
return 2 * smallOutput;
}

void printArray(string output[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << output[i] << endl;
	}
}

int main() {
	string input;
	cout << "Enter the string: ";
	cin >> input;
	int length = input.size();
	int finalL = pow(2, length);
	string *output = new string[finalL];
	int count = subsequences(input, output);
	printArray(output, count);
	delete [] output;
return 0;
}
