#include <iostream>
#include <cmath>
using namespace std;

int numberOfBts(int h) {
	int * arr = new int[h + 1];
	arr[0] = 1;
	arr[1] = 1;
	int mod = (int)(pow(10, 9)) + 7;
	for(int i = 2; i < h + 1; i ++) {
		int x = arr[i - 1];
		int y = arr[i - 2];
		int temp1 = (int)(((long)(x) * x) % mod);
		int temp2 = (int)(((long)(x) * 2 * y) % mod);
		arr[i] = (temp1 + temp2) % mod;
	}
	int ans = arr[h];
	delete [] arr;
return ans;
}

int main() {
	int h;
	cout << "Emter the height of the BT: ";
	cin >> h;
	int ans = numberOfBts(h);
	cout << "The number of balanced BTs in a BT of height " << h << " is: " << ans << endl;
return 0;
}
