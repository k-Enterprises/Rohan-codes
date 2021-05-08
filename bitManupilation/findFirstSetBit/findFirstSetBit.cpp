#include <iostream>
using namespace std;
int firstSetBit(int n){
	int i = 0, c = 0;
	while(n % 2 == 0){
		n = n >> 1;
		c ++;
	}
	return (1 << c);
}
int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	int ans = firstSetBit(n);
	cout << ans << endl;
}
