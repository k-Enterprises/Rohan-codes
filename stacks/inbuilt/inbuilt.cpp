#include <iostream>
using namespace std;
#include <stack>

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	cout << "Top: " << s.top() << endl; // return type T
	cout << "Size: " << s.size() << endl; // return type int
	s.pop(); // return type void
	cout << "Top: " << s.top() << endl;
	cout << "Size: " << s.size() << endl;
	cout << "Empty: " << s.empty() << endl;
	stack<char> s1;
	s1.push('A');
	s1.push('B');
	s1.push('C');
	cout << "Top: " << s1.top() << endl;
	cout << "Size: " << s1.size() << endl;
	s1.pop();
	cout << "Top: " << s1.top() << endl;
	cout << "Size: " << s1.size() << endl;
return 0;
}
