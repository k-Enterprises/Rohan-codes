#include "TrieNode.h"
#include <string>
#include <vector>
#include <algorithm>
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
 			if(root -> children[index] != NULL) {
 				child = root -> children[index];
 			} else {
 				child = new TrieNode(word[0]);
 				root -> children[index] = child;
 			}
 			insert(child, word.substr(1));
 		}

		void insert(string word) {
			insert(this -> root, word);
		return;
		}
		bool search(TrieNode * root, string word) {
			if(word.size() == 0) {
				return true;
			}
			int index = word[0] - 'a';
			if(root -> children[index] == NULL) {
				return false;
			}
			TrieNode * child = root -> children[index];
			bool smallAns = search(child, word.substr(1));
		return smallAns;
		}
		bool search(string word) {
			bool ans = search(this -> root, word);
		return ans;
		}
		bool palindromePair(vector<string> words) {
			bool finalAns;
			for(int i = 0; i < words.size(); i ++) {
				for(int j = 0; j < words.at(i).size(); j ++) {
					insert(words.at(i).substr(j));
				}
			}
			for(int i = 0; i < words.size(); i ++) {
				string word = words.at(i);
				reverse(word.begin(), word.end());
				bool ans = search(word);
				if(ans == true) {
					return true;
				} else {
					if(i == words.size() - 1) {
						finalAns = false;
						break;
					}
					continue;
				}
			}
		return finalAns;
		}
};
