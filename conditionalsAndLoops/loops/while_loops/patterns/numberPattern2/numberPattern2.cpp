#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1, j = 1, k;
	while(i <= n){
		k = j;
		while(j < i + k){
			cout << j << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}
