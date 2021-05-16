#include <iostream>
using namespace std;

int sum(int n){
	if(n == 0) {
		return 0;
	}
	int ans = sum(n - 1);
return ans + n;
}

int main() {
	int n;
	cout << "Enter the the number: ";
	cin >> n;
	cout << "The sum is: " << sum(n) << endl;
return 0;
}
