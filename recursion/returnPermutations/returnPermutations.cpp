#include <iostream>
using namespace std;

int returnPermutations(string input, string output[10000]) {
	if(input.size() == 0) {
		output[0] = "";
		return 1;
	}
	string smallOutput[10000];
	int smallAns = returnPermutations(input.substr(1), smallOutput);
	int k = 0;
	for(int i = 0; i < smallAns; i ++) {
		for(int j = 0; j <= smallOutput[i].size(); j ++) {
			output[k] = smallOutput[i].substr(0, j) + input[0] + smallOutput[i].substr(j);
			k ++;
		}
	}
	return k;
}

void printStringArray(string output[10000], int n) {
	for(int i = 0; i < n; i ++) {
		cout << output[i] << endl;
	}
}

int main() {
	string input, output[10000];
	cout << "Enter the string: ";
	cin >> input;
	int ans = returnPermutations(input, output);
	printStringArray(output, ans);
return 0;
}
