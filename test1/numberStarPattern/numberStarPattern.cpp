#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of rows: ";
	cin >> n;
	int i = 0;
	int r = n;
	while(i < n) {
		int j = 0;
		int r2 = n - i;
		while(j < 2 * n) {
			if(i == 0) {
				int k = 1;
				if(j < (2 * n) / 2) {
					cout << j + 1 << " ";
				}
				else{
					cout << r << " ";
					r --;
				}
			}else{
				if(j < n - i) {
					cout << j + 1 << " ";
				}else if(j >= n + i) {
					cout << r2 << " ";
					r2 --;
				}else{
					cout << "*" << " ";
				}
			}
			j ++;
		}
		cout << endl;
		i ++;
	}
return 0;
}
