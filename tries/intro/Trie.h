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
		}
		bool search(TrieNode * root, string word) const {
			if(word.size() == 0) {
				if(root -> isTerminal == true) {
					return true;
				}
				return false;
			}
			int index = word[0] - 'a';
			if(root -> children[index] == NULL) {
				return false;
			}
			TrieNode * child = root -> children[index];
			bool smallAns = search(child, word.substr(1));
			return smallAns;
		}
		bool search(string word) const {
			return(search(this -> root, word));
		}
		void remove(TrieNode * root, string word) {
			if(word.size() == 0) {
				root -> isTerminal = false;
				return;
			}
			int index = word[0] - 'a';
			if(root -> children[index] == NULL) {
				return;
			}
			TrieNode * child = root -> children[index];
			remove(child, word.substr(1));
			if(child -> isTerminal == false) {
				for(int i = 0; i < 26; i ++) {
					if(child -> children[i] != NULL) {
						return;
					}
				}
				delete child;
				root -> children[index] = NULL;
			return;
			}
		}
		void remove(string word){
			remove(this -> root, word);
		return;
		}
};
