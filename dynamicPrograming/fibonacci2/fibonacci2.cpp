#include <iostream>
using namespace std;

int fibonacciDynamic(int n) {
	int * ans = new int[n + 1];
	ans[0] = 0; // solve and store small problem to solve the larger problem (bottom - up)
	ans[1] = 1;
	for(int i = 2; i <= n; i ++) {
		ans[i] = ans[i - 1] + ans[i - 2];
	}
return ans[n];
}

int main() {
	int n;
	cout << "Enter the index of the sequence: ";
	cin >> n;
	int ans = fibonacciDynamic(n);
	cout << "The " << n << "th fibonacci number in the sequence is: " << ans << endl;
return 0;
}
