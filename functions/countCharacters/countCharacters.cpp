#include <iostream>
using namespace std;

int main() {
	int ch, digit = 0, alpha = 0, space = 0;
	ch = cin.get();
	while(ch != '$'){
		if(ch >= 'a' && ch <= 'z'){
			alpha ++;
		}else if(ch >= '0' && ch <= '9'){
			digit ++;
		}else{
			space ++;
		}
		ch = cin.get();
	}
	cout << digit << "  " << alpha << "  " << space << endl;
return 0;
}
