#include <iostream>
using namespace std;
int main(){
	int n, i = 3;
	cout << "enter the number of rows: ";
	cin >> n;
	cout << 1 << " " << endl;
	cout << 1 << " " << 1 << endl;
	while(i <= n){
		int j = 1;
		while(j <= i){
			if(j == 1 || j == i){
				cout << i -1 << " ";
				j += 1;
			}else{
				cout << 0 << " ";
				j += 1;
			}
		}
		cout << endl;
		i += 1;
	}
}
