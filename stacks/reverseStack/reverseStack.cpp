#include <iostream>
using namespace std;
#include "Stack.cpp"

void takeInput(Stack<int> &s) {
	int data;
	cout << "Enter data: ";
	cin >> data;
	while(data != -1) {
		s.push(data);
		cin >> data;
	}
return;
}

void reverse(Stack<int> &s, Stack<int> &helper) {
	if(s.getSize() == 1) {
		return ;
	}
	int temp = s.top();
	s.pop();
	reverse(s, helper);
	while(s.getSize() != 0) {
		helper.push(s.top());
		s.pop();
	}
	s.push(temp);
	while(helper.getSize() != 0) {
		s.push(helper.top());
		helper.pop();
	}
return;
}

void printStack(Stack<int> s) {
	while(s.getSize() != 0) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {
	Stack<int> s;
	Stack<int> helper;
	takeInput(s);
	cout << "Top: " << s.top() << endl;
	cout << "Size: " << s.getSize() << endl;
	reverse(s, helper);
	cout << "Top: " << s.top() << endl;
	cout << "Size: " << s.getSize() << endl;
	cout << "Final stack with top " << s.top() << " is: ";
	printStack(s);
return 0;
}
