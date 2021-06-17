#include <iostream>
#include <climits>
using namespace std;

int countMinStepsToOne(int n) {
    if(n == 1) {
        return 0;
    }
    int x = 0, y = INT_MAX, z = INT_MAX;
	x = countMinStepsToOne(n - 1);
    if(n % 2 == 0) {
        y = countMinStepsToOne(n / 2);
    } else if(n % 3 == 0) {
        z = countMinStepsToOne(n / 3);
    }
return (min(x, min(y, z)) + 1);
}

int main() {
	int n;
	cout << "Enter the value of the n: ";
	cin >> n;
	int ans = countMinStepsToOne(n);
	cout << "Minimum steps required in order to reach form " << n << " to 1 is: " << ans << endl;
return 0;
}
