#include <iostream>
using namespace std;

int helper(int n, int * ans) {
	if(n <= 1) {
		return 0;
	}
	int x = 0, y = INT_MAX, z = INT_MAX;
	if(ans[n] != -1) {
		return ans[n];
	}
	x = helper(n - 1, ans);
	if(n % 2 == 0) {
		y = helper(n / 2, ans);
	}
	if(n % 3 == 0) {
		z = helper(n / 3, ans);
	}
	ans[n] = min(x, min(y, z)) + 1;
return ans[n];
}

int countMinStepsToOne(int n) {
	int * ans = new int[n + 1];
	for(int i = 0; i < n + 1; i ++) {
		ans[i] = -1;
	}
return(helper(n, ans));
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int ans = countMinStepsToOne(n);
	cout << "Minimum steps required in order to reach 1 from " << n << " is: " << ans << endl;
return 0;
}
