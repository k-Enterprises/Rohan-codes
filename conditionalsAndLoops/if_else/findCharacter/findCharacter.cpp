#include <iostream>
using namespace std;
int main(){
	char x;
	cout << "Please enter the character: ";
	cin >> x;
	if(x >= 'A' && x <= 'Z'){
		cout << "Uppercase" << endl;
	}
	else if(x >= 'a' && x <= 'z'){
		cout << "Lowercase" << endl;
	}else{
		cout << "It is a special character or a numeric digit" << endl;
	}
return 0;
}
