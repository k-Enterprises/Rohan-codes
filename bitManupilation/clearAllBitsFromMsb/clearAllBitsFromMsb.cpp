#include <iostream>
using namespace std;
int bitMask(int n, int i){
	int bm = (1 << i) - 1;
	return bm;
}
int main(){
	int n, i;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Enter the position: ";
	cin >> i;
	int bm = bitMask(n, i);
	int ans = n & bm;
	cout << ans << endl;
return 0;
}
