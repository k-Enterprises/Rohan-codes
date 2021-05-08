#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	cout << "1" << endl;
	int i = 1;
	while(i <= n - 1){
		int j = 0, val = 1;
		while(j <= i){
			if(j == 0){
				cout << val;
			}else{
				val = (val * (i - (j - 1))) / j;
				cout << val;
			}
			j += 1;
		}
		cout << endl;
		i += 1;
	}
return 0;
}
