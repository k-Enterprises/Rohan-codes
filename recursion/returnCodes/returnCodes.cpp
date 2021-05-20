#include <iostream>
using namespace std;

int returnCodes(string input, string output[10000]) {
	if(input.size() == 0) {
		output[0] = "";
		return 1;
	}
	int number = input[0] - '0';
	char maped = number + 'a' - 1;
	string o1[10000];
	string ros1 = input.substr(1);
	int ans1 = returnCodes(ros1, o1);
	for(int i = 0; i < ans1; i ++) {
		output[i] = maped + o1[i];
	}
	if(input.size() > 1){
		string number2 = input.substr(0,2);
		int n1 = number2[0] - '0';
		int n2 = number2[1] - '0';
		int finalNumber = (n1 * 10) + n2;
		int ans2;
		string o2[10000];
		string ros2 = input.substr(2);
		if(finalNumber >= 10 && finalNumber <= 26) {
			ans2 = returnCodes(ros2, o2);
			char maped2 = finalNumber + 'a' - 1;
			for(int i = ans1; i < ans1 + ans2; i ++) {
				output[i] = maped2 + o2[i - ans1];
			}
			return ans1 + ans2;
		}
	}
	return ans1;
}

void printStringArray(string output[10000], int n) {
	for(int i = 0; i < n; i ++) {
		cout << output[i] << endl;
	}
	cout << output[1] << endl;
}

int main() {
	string input, output[1000];
	cout << "Enter the numeric string: ";
	cin >> input;
	int ans = returnCodes(input, output);
	printStringArray(output, ans);
return 0;
}
