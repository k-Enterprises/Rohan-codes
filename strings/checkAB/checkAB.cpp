#include <iostream>
using namespace std;

bool checkAB(string input, int si) {
	if(input.size() == 1){
		return true;
	}
	bool ans;
	if(input[si] == 'a') {
		if(input[si + 1] == 'b' && input[si + 2] == 'b') {
			string s = input.substr(1);
			ans = checkAB(s, si);
		}else if(input[si + 1] == 'a'){
			string s = input.substr(1);
			ans = checkAB(s, si);
		}else if(input[si + 1] == '\0'){
			return true;
		}else{
			return false;
		}
	}else{
		if(input[si + 1] == 'b' && input[si + 2] == 'a') {
			string s = input.substr(1);
			ans = checkAB(s, si);
		}else if(input[si + 1] == 'b' && input[si + 2] == '\0'){
			return true;
		}else{
			return false;
		}
	}
return ans;
}

int main() {
	string input;
	cout << "Enter the string: ";
	cin >> input;
	bool ans = checkAB(input, 0);
	cout << ((ans) ? "true" : "false") << endl;
return 0;
}
