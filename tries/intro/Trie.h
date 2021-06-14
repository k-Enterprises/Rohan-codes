class Trie {
	private :
		TrieNode * root;
	public :
		Trie() {
			this -> root = TrieNode('\0');
		}
		void insert(TrieNode * root, string word) {
			if(word.size() == 0) {
				root -> isTerminal = true;
				return;
			}
			int index = word[0] - 'a';
			if(root -> children[index] != NULL) {
				TrieNode * child = children[index];
			} else {
				TrieNode * child = new TrieNode(word[0]);
				root -> children[index] = child;
			}
			insert(child, word.substr(1));
		}
		void insert(string word) {
			insert(this -> root, word);
		}
};
