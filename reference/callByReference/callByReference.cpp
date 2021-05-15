#include <iostream>
using namespace std;

void increment(int & i) {
	i ++;
}

int main() {
	int i = 10;
	cout << i << endl;
	increment(i);
	cout << i << endl;
return 0;
}
