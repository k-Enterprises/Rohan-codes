#include <iostream>
using namespace std;

void printCodes(string input, string output) {
	if(input.size() == 0) {
		cout << output << endl;
		return;
	}
	int number = input[0] - '0';
	char mapped = number + 'a' - 1;
	string ros = input.substr(1);
	printCodes(ros, output + mapped);
	if(input.size() > 1) {
		string firstTwo = input.substr(0, 2);
		int n1 = input[0] - '0';
		int n2 = input[1] - '0';
		int finalNumber = (n1 * 10) + n2;
		char mapped2 = finalNumber + 'a' - 1;
		string ros2 = input.substr(2);
		printCodes(ros2, output + mapped2);
	}
return;
}

int main() {
	string input, output = "";
	cout << "Enter the string: ";
	cin >> input;
	printCodes(input, output);
return 0;
}
