#include <iostream>
#include "BST.h"
using namespace std;

int main() {
	BST b;
	b.insert(5);
	b.insert(2);
	b.insert(6);
	b.insert(7);
	b.insert(1);
	b.insert(3);
	b.insert(5);
	b.printTree();
	cout << endl;
return 0;
}
