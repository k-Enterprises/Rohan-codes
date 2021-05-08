#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	while (i <= n){
		int j = 1, num = i;
		while(j <= (2 * n) - 1){
			if(j <= n - 1 - (i - 1) || j >= n + 1 + (i - 1)){
				cout << " ";
			}else{
				if(j < n){
					cout << num;
					num ++;
				}else{
					cout << num;
					num --;
				}
			}
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}
