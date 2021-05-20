#include <iostream>
using namespace std;

void printPermutations(string input, string output) {
	if(input.size() == 0) {
		cout << output << endl;
	}
	for(int i = 0; i < input.size(); i ++) {
		string ros = input.substr(0, i) + input.substr(i + 1);
		printPermutations(ros, output + input[i]);
	}
return;
}

int main() {
	string input, output = "";
	cout << "Enter the string: ";
	cin >> input;
	printPermutations(input, output);
return 0;
}
