#include <iostream>
using namespace std;
int bitMask(int n){
	int c = 0;
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
	int bm = bitMask(n);
	int ans = n & ~(bm);
	cout << ans << endl;
return 0;
}
