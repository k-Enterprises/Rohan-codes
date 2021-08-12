#include <iostream>
#include <vector>
#include <map>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
return;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int arr1[a], arr2[b], arr3[c];
	takeInput(arr1, a);
	takeInput(arr2, b);
	takeInput(arr3, c);
	map<int, int> m;
	for(int i = 0; i < a; i ++) {
		m[arr1[i]] ++;
	}
	for(int i = 0; i < b; i ++) {
		m[arr2[i]] ++;
	}
	for(int i = 0; i < c; i ++) {
		m[arr3[i]] ++;
	}
	map<int, int>::iterator it;
	vector<int> result;
	for(it = m.begin(); it != m.end(); it ++) {
		if(it -> second > 1) {
			result.push_back(it -> first);
		}
	}
	int size = result.size();
	sort(result.begin(), result.end());
	vector<int>::iterator it1;
	cout << endl;
	cout << endl;
	cout << size << endl;
	for(it1 = result.begin(); it1 != result.end(); it1 ++) {
		cout << *it1 << endl;
	}
}
