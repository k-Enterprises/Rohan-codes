#include <iostream>
using namespace std;
int main(){
	int n;
	char a = 'A';
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	while(i <= n){
		int j = 1;
		while (j <= i){
			cout << a;
			j += 1;
		}
		a += 1;
		cout << endl;
		i += 1;
	}
return 0;
}
