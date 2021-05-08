#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 0;
	while (i <= n){
		int j = 1;
		while(j <= (2 * n) - 1){
			if(j <= n - 1 - (i - 1) || j >= n + 1 + (i - 1)){
				cout << " ";
			}else{
				cout << "*";
			}
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}
