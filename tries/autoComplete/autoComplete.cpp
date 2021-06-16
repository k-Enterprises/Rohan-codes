#include <iostream>
#include <string>
#include <vector>
#include "Trie.h"
using namespace std;

void takeInput(vector<string> &words, int size) {
	for(int i = 0; i < size; i ++) {
		string s;
		cout << "Enter the " << i << "th string: ";
		cin >> s;
		words.push_back(s);
	}
}

int main() {
	Trie T;
	string pattern;
	int size;
	cout << "Enter the number of words: ";
	cin >> size;
	vector<string> words;
	takeInput(words, size);
	cout << "Enter the word: ";
	cin >> pattern;
	cout << "The possible recomendations are: " << endl;
	T.autoComplete(words, pattern);
return 0;
}
