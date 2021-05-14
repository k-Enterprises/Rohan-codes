#include <iostream>
using namespace std;

int main() {
	int i = 20;
	cout << &i << endl;
	int * p = &i;
	cout << p << endl;
	cout << *p << endl;
return 0;
}
