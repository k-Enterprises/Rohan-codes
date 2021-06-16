#include <iostream>
using namespace std;

unsigned long int fiboHelper(int n, unsigned long int * ans) {
	if(n <= 1) {
		return n;
	}
	if(ans[n] != -1) {
		return ans[n];
	}
	unsigned long int a = fiboHelper(n - 1, ans);
	unsigned long int b = fiboHelper(n - 2, ans);
	ans[n] = (a + b) % 1000000000000007;
return ans[n];
}

unsigned long int fibonacci(int n) {
	unsigned long int * ans = new unsigned long int[n + 1];
	for(int i = 0; i < n + 1; i ++) {
		ans[i] = -1;
	}
	unsigned long int finalAns = fiboHelper(n, ans);
return finalAns;
}

int main() {
	int n;
	cout << "Enter the index of the fibonacci series: ";
	cin >> n;
	unsigned long int ans = fibonacci(n);
	cout << "The " << n << "th fibonacci number in series is: " << ans << endl;
return 0;
}
