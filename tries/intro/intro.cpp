#include <iostream>
#include <string>
#include "Trie.h"
using namespace std;

int main() {
	Trie t;
	t.insert("and");
	cout << t.search("and") << endl;
	t.remove("and");
	cout << t.search("and") << endl;
return 0;
}
