#include <iostream>
using namespace std;
#include <stack>

bool checkRedundant(stack<char> q, string str) {
	for(int i = 0; i < str.size(); i ++) {
		if(str[i] == ')') {
			int count = 0;
			while(q.top() != '(' && !q.empty()) {
				if(!q.empty()){
					q.pop();
					count ++;
				}
			}
			if(count == 0) {
				q.pop();
				return true;
			}
		} else {
			q.push(str[i]);
		}
	}
return false;
}

int main() {
	stack<char> q;
	string str;
	cout << "Enter the equation: ";
	cin >> str;
	cout << str << endl;
	bool ans = checkRedundant(q, str);
	cout << ((ans) ? "true" : "false") << endl;
return 0;
}
