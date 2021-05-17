#include <iostream>
#include <cmath>
using namespace std;

double geometricSum(int n) {
	if(n == 0) {
		return 1.0;
	}
	double ans = geometricSum(n - 1);
	double smallCalc = 1.0 / pow(2, n);
return ans + smallCalc;
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "The geometric sum till n is: " << geometricSum(n) << endl;
return 0;
}
