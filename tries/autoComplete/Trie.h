#include <string>
#include <vector>
#include "TrieNode.h"
using namespace std;

class Trie {
	private :
		TrieNode * root;
	public :
		Trie() {
			this -> root = new TrieNode('\0');
		}
		void insert(TrieNode * root, string word) {
			if(word.size() == 0) {
				root -> isTerminal = true;
				return;
			}
			int index = word[0] - 'a';
			TrieNode * child;
			if(root -> children[index] == NULL) {
				child = new TrieNode(word[0]);
				root -> children[index] = child;
			} else {
				child = root -> children[index];
			}
			insert(child, word.substr(1));
		return;
		}
		void insert(string word) {
			insert(this -> root, word);
		return;
		}
		TrieNode * findWord(TrieNode * root, string word) {
			if(word.size() == 0) {
				return root;
			}
			int index = word[0] - 'a';
			if(root -> children[index] == NULL) {
				return NULL;
			}
			TrieNode * child = root -> children[index];
			TrieNode * node = findWord(child, word.substr(1));
		return node;
		}
		void printAll(TrieNode * root, string word, string output) {
			if(root == NULL) {
				return;
			}
			if(root -> isTerminal) {
				cout << word + output << endl;
			}
			for(int i = 0; i < 26; i ++) {
				string smallOutput = output;
				TrieNode * child = root -> children[i];
				if(child != NULL) {
					smallOutput.push_back(root -> children[i] -> data);
				}
				printAll(child, word, smallOutput);
			}
		}
		void autoComplete(vector<string> words, string pattern) {
			for(int i = 0; i < words.size(); i ++) {
				insert(words.at(i));
			}
			TrieNode * node = findWord(this -> root, pattern);
			string output = "";
			printAll(node, pattern, output);
		return;
		}
};
