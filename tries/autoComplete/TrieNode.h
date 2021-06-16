class TrieNode {
	public :
		char data;
		bool isTerminal;
		TrieNode ** children;
		TrieNode(char data) {
			this -> data = data;
			this -> isTerminal = false;
			this -> children = new TrieNode*[26];
			for(int i = 0; i < 26; i ++) {
				this -> children[i] = NULL;
			}
		}
};
