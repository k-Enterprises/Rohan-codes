#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, max = INT_MIN;
	cout << "Enter the size of array: ";
	cin >> n;
	int * p = new int[n];
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of " << i << " element: ";
		cin >> p[i];
	}
	for(int i = 0; i < n; i ++) {
		if(max < p[i]) {
			max = p[i];
		}
	}
	cout << "The max value in array is: " << max << endl;
	delete [] p;
return 0;
}
