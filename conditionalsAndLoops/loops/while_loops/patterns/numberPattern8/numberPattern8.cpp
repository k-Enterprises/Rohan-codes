#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 0;
	while(i < n){
		int j = 0;
		int k = n - i;
		while(j < n){
			if(j < i){
				cout << k;
				k ++;
			}else{
				cout << n;
			}
			j ++;
		}
		cout << endl;
		i ++;
	}
return 0;
}
