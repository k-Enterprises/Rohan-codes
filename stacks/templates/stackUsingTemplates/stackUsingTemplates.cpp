#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
	Stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	s1.push(60);
	cout << "Top: " << s1.top() << endl;
	cout << "Size: " << s1.size() << endl;
	cout << "Poped: " << s1.pop() << endl;
	cout << "Top: " << s1.top() << endl;
	cout << "Size: " << s1.size() << endl;
	cout << "Stack is empty: " << ((s1.isEmpty()) ? "true" : "false") << endl;
	Stack<char> s2;
	s2.push('A');
	s2.push('B');
	s2.push('C');
	s2.push('D');
	s2.push('E');
	s2.push('F');
	s2.push('G');
	cout << "Top: " << s2.top() << endl;
	cout << "Size: " << s2.size() << endl;
	cout << "Poped: " << s2.pop() << endl;
	cout << "Top: " << s2.top() << endl;
	cout << "Size: " << s2.size() << endl;
	cout << "Stack is empty: " << ((s2.isEmpty()) ? "true" : "false") << endl;
return 0;
}
