#include <iostream>
using namespace std;
long factorial(int n){ // function prototype
	long ans = 1;
	for(int i = 1; i <= n; i++){ // function body
		ans = ans * i;
	}
	return ans;
}
int main(){
	long n, r, nfact, rfact, nrfact;
	long ans;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "Enter thr value of r: ";
	cin >> r;
	nfact = factorial(n); // function calling
	rfact = factorial(r); // function calling
	int nr = n - r;
	nrfact = factorial(nr); // function calling
	ans = nfact / (rfact * nrfact);
	cout << ans << endl;
return 0;
}
