#include <iostream>
using namespace std;
#include <stack>

int main() {
	string str;
	int flag = 0;
	stack<char> s;
	cout << "Enter the string: ";
	cin >> str;
	for(int i = 0; i < str.size(); i ++) {
		if(str[i] == '{') {
			s.push(str[i]);
		} else if(str[i] == '(') {
			s.push(str[i]);
		} else if(str[i] == '[') {
			s.push(str[i]);
		} else if(str[i] == '}') {
			char top = s.top();
			if('{' != top) {
				cout << "false" << endl;
				flag = 1;
				break;
			}
			s.pop();
		} else if(str[i] == ')') {
			char top = s.top();
			if('(' != top) {
				cout << "false" << endl;
				flag = 1;
				break;
			}
			s.pop();
		} else if(str[i] == ']') {
			char top = s.top();
			if('[' != top) {
				cout << "false" << endl;
				flag = 1;
				break;
			}
			s.pop();
		} else {
			continue;
		}
	}
	if(s.empty()) {
		cout << "true" << endl;
	} else {
		if(flag == 0) {
			cout << "false" << endl;
		}
	}
return 0;
}
