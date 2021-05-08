#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Reversed number is: ";
	if(n == 0){
		cout << 0;
	}
	while(n > 0 && n % 10 == 0){
		n = n / 10; // to remove all the zeros from the number
	}
	while (n > 0){
		int mod = n % 10;
		cout << mod;
		n = n / 10;
	}
	cout << endl;
return 0;
}
