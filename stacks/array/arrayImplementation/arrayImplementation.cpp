#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
	int size;
	cout << "Enter the size of stack: ";
	cin >> size;
	Stack s(size);
	cout << s.top() << endl;
	cout << s.pop() << endl;
	s.push(20);
	s.push(30);
	cout << s.top() << endl;
	cout << ((s.isEmpty()) ? "Stack is empty" : "Stack is not empty") << endl;
}
