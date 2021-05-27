#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	cout << "Top : " << s.top() << endl;
	cout << "Popped: " << s.pop() << endl;
	cout << "Top: " << s.top() << endl;
	cout << "Size of stack: " << s.size() << endl;
	cout << "Stack is empty: " << ((s.isEmpty()) ? "true" : "false") << endl;
return 0;
}
