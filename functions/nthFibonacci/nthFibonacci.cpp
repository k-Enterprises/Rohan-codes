#include <iostream>
using namespace std;

void printNthFibonacci(int n) {
	int a = 0, b =1 , c = a + b;
	if(n == 0){
		cout << 0 << endl;
		return;
	}else if (n == 1 || n == 2){
		cout << 1 << endl;
		return;
	}else{
		int i = 3;
		while(i <= n){
			a = b;
			b = c;
			c = a + b;
			i ++;
		}
		cout << c << endl;
	}
}

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	printNthFibonacci(n);
return 0;
}
