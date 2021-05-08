#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i =1, k = 1;
	while(i <= n){
		int j = 1;
		while (j <= n){
			if(j < (n - i) + 1){
				cout << " ";
				j += 1;
			}else{
				cout << k;
				k += 1;
				j += 1;
			}
		}
		cout << endl;
		i += 1;
	}
}
