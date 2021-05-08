#include <iostream>
using namespace std;
int main(){
	int n, i, bm, ans;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Enter the bit position: ";
	cin >> i;
	bm = ~(1 << i);
	ans = n & bm;
	cout << ans << endl;
return 0;
}
