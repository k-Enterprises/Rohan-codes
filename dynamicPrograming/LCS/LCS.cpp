#include <iostream>
#include <string>
using namespace std;

int LCS(string s, string t) {
	if(s.size() == 0 || t.size() == 0) {
		return 0;
	}
	if(s[0] == t[0]) {
		return 1 + LCS(s.substr(1), t.substr(1));
	}
	int a = LCS(s, t.substr(1));
	int b = LCS(s.substr(1), t);
return max(a, b);
}

int main() {
	string s, t;
	cout << "Enter the first string: ";
	cin >> s;
	cout << "Enter the second string: ";
	cin >> t;
	int ans = LCS(s, t);
	cout << "The size of the LCS is: " << ans << endl;
}
