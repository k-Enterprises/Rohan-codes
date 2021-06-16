#include <iostream>
#include <vector>
#include <string>
#include "Trie.h"
using namespace std;

void takeInput(vector<string> &words, int size) {
	for(int i = 0; i < size; i ++) {
		string s;
		cout << "Enter the " << i << "th string: ";
		cin >> s;
		words.push_back(s);
	}
return;
}

int main() {
	Trie T;
	int size;
	cout << "Enter the number of words: ";
	cin >> size;
	vector<string> words;
	takeInput(words, size);
	bool ans = T.palindromePair(words);
	cout << ((ans) ? "True" : "False") << endl;
return 0;
}
