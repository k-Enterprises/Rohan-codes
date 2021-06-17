#include <iostream>
#include <climits>
using namespace std;

int countMinStepsToOne(int n) {
	int * ans = new int[n + 1];
	ans[0] = 0;
	ans[1] = 0;
	for(int i = 2; i <= n; i ++) {
		int x, y = INT_MAX, z = INT_MAX;
		x = ans[i - 1];
		if(i % 2 == 0) {
			y = ans[i / 2];
		}
		if(i % 3 == 0) {
			z = ans[i / 3];
		}
		ans[i] = min(x, min(y, z)) + 1;
	}
	int finalAns = ans[n];
	delete [] ans;
return finalAns;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int ans = countMinStepsToOne(n);
	cout << "Minimum number of steps required in order to reach 1 from " << n << " is: " << ans << endl;
return 0;
}
