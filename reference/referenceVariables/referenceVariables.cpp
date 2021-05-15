#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int &j = i; // does not create any separate memory just tells system to give reference to a memory;
	cout << i << endl;
	cout << j << endl;
	i ++;
	cout << i << endl;
	cout << j << endl;
	j ++;
	cout << i << endl;
	cout << j << endl;
	cout << &j << endl;
	cout << &i << endl;
return 0;
}
