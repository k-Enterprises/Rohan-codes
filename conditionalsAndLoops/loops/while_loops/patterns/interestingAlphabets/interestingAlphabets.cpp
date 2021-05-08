#include <iostream>
using namespace std;
int main(){
	int n;
	char a = 'E';
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	while(i <= n){
		char b = a;
		int j = 1;
		while(j <= i){
			cout << b;
			b ++;
			j += 1;
		}
		a --;
		cout << endl;
		i += 1;
	}
return 0;
}
