#include <iostream>
using namespace std;
int main(){
	int n, k = 1;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	while(i <= n){
		int j = 1;
		int x = (n / 2) + 1;
		while(j <= n){
			if(j <= x - k || j >= x + k){
				cout << " ";
			}else{
				cout << "*";
			}
			j += 1;
		}
		cout << endl;
		i += 1;
		if(i <= x){
			k = i;
		}else{
			k = (n + 1) - i;
		}
	}
return 0;
}
