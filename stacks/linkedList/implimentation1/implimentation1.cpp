#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	cout << "Top: " << s.top() << endl;
	cout << "Size: " << s.size() << endl;
	cout << "Poped: " << s.pop() << endl;
	cout << "Top: " << s.top() << endl;
	cout << "Size:" << s.size() << endl;
	cout << "Stack is empty: " << ((s.isEmpty()) ? "true" : "false") << endl;
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
    cout << "Size:" << s2.size() << endl;
    cout << "Stack is empty: " << ((s2.isEmpty()) ? "true" : "false") << endl;
	Stack<double> s3;
	cout << "Stack is empty: " << ((s3.isEmpty()) ? "true" : "false") << endl;
return 0;
}
