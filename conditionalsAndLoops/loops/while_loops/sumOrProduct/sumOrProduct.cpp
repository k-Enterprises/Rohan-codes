#include <iostream>
using namespace std;

int main() {
	int n, ch, sum = 0, product = 1;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Enter 1 for the sum or 2 for the product: ";
	cin >> ch;
	if(ch == 1){
		for(int i = 1; i <= n; i ++) {
			sum += i;
		}
		cout << sum << endl;
	}else{
		for(int i = 1; i <= n; i ++) {
			product = product * i;
		}
		cout << product << endl;
	}
return 0;
}
