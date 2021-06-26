#include <iostream>
#include <cmath>
using namespace std;

int numberOfBts(int h) {
	if(h <= 1) {
		return 1;
	}
	int mod = (int)(pow(10, 9)) + 7;
	int x = numberOfBts(h - 1);
	int y = numberOfBts(h - 2);
	int temp1 = (int)((x * (long)(x)) % mod);
	int temp2 = (int)((2 * (long)(x) * y) % mod);
	int ans = (temp1 + temp2) % mod;
return ans;
}

int main() {
	int h;
	cout << "Enter the height of the binary tree: ";
	cin >> h;
	int ans = numberOfBts(h);
	cout << "Number of Bts in a binary tree of height " << h << " is: " << ans << endl;
return 0;
}
