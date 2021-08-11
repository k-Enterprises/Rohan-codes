#include <iostream>
#include <algorithm> // for functions like, sorting, searching, upperbound & lowerbound
#include <cmath> // for function pow
#include <utility> // for function swap
using namespace std;

struct Interval { // creating interval structure to demonstarate custom function for sort()
	int st;
	int et;
};

bool compare(Interval it, Interval it2) { // custom function for sort
	return it.st < it2.st; // returns the smaller
}

int main() {
	int arr[] = {1, 3, 2, 7, 6, 5};
	sort(arr, arr + 6); // simple ascending order sorting
	for(int i = 0; i < 6; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr, arr + 6, greater<int>()); // decending order sorting
	for(int i = 0; i < 6; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	Interval arr1[] = {{3, 6}, {1, 5}, {2, 7}, {4, 9}}; // creating interval type array
	sort(arr1, arr1 + 4, compare); // calling sort() with passing custom parameter for comparing
	for(int i = 0; i < 4; i ++) {
		cout << arr1[i].st << ": " << arr1[i].et << ", ";
	}
	cout << endl;

	sort(arr, arr + 6); // sorting in order to use binary_search
	cout << binary_search(arr, arr + 6, 9) << endl; // binary_search only tells if present or not 0, 1

	cout << lower_bound(arr, arr + 6, 6) - arr << endl; // not that usefull if the element is not present will give address of the last
	cout << upper_bound(arr, arr + 6, 6) - arr << endl; // same not that useful

	//cout << std::__gcd(10, 6) << endl; doesn't work on this but work on other compiler helps you find gcd
	cout << pow(2, 5) << endl; // helps you find the x ^ n thing

	int x = 10, y = 9;
	swap(x, y); // swaps to numbers
	cout << "X: " << x << " Y: " << y << endl;
	
	cout << max(230, 989) << endl; // find and returns maximum of the given 2 numbers
return 0;
}
