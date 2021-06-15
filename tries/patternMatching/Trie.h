#include "TrieNode.h"
#include <string>
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
			return(search(this -> root, word));
		}
		void suffixTrie(vector<string> vect) {
			for(int i = 0; i < vect.size(); i ++) {
				for(int j = 0; j < vect.at(i).size(); j ++) {
					insert(vect.at(i).substr(j));
				}
			}
		}
		bool matchPattern(vector<string> vect, string pattern) {
			suffixTrie(vect);
			return (search(pattern));
		}
};
