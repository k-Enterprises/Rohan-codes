#include <iostream>
#include <cmath>
using namespace std;

int helper(int h, int * arr) {
	if(h <= 1) {
		return 1;
	}
	if(arr[h] != -1) {
		return arr[h];
	}
	int mod = (int)(pow(10, 9)) + 7;
	int x = helper(h - 1, arr);
	int y = helper(h - 2, arr);
	int temp1 = (int)((x * (long)(x)) % mod);
	int temp2 = (int)((2 * (long)(x) * y) % mod);
	arr[h] = (temp1 + temp2) % mod;
return arr[h];
}

int numberOfBts(int h) {
	int * arr = new int[h + 1];
	for(int i = 0; i < h + 1; i ++) {
		arr[i] = -1;
	}
	int ans = helper(h, arr);
	delete [] arr;
return ans;
}

int main() {
	int h;
	cout << "Enter the height of the BT: ";
	cin >> h;
	int ans = numberOfBts(h);
	cout << "Number of the balanced BTs in a BT of height " << h << " is: " << ans << endl;
return 0;
}
