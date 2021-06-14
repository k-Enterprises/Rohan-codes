class TrieNode {
	public :
		char data;
		bool isTerminal;
		TrieNode ** children;
		TrieNode(char const &data) {
			this -> data = data;
			this -> children = new TrieNode*[26];
			for(int i = 0; i < 26; i ++) {
				children[i] = NULL;
			}
			this -> isTerminal = false;
		}
};
