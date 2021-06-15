#include <iostream>
#include <vector>
#include <string>
#include "Trie.h"
using namespace std;

void takeInput(vector<string> &vect, int size) {
	for(int i = 0; i < size; i ++) {
		string s;
		cout << "Enter the " << i << "th string: ";
		cin >> s;
		vect.push_back(s);
	}
return;
}

int main() {
	Trie T;
	int size;
	string pattern;
	cout << "Enter the size of the array: ";
	cin >> size;
	vector<string> vect;
	takeInput(vect, size);
	cout << "Enter the pattern you want to match: ";
	cin >> pattern;
	bool ans = T.matchPattern(vect, pattern);
	cout << ((ans) ? "True" : "False") << endl; 
return 0;
}
