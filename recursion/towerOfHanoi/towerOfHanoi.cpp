#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char aux, char dest) {
	if(n == 0) {
		return;
	}
	towerOfHanoi(n - 1, source, dest, aux);
	cout << source << " " << dest << endl;
	towerOfHanoi(n - 1, aux, source, dest);
}

int main() {
	int n;
	cout << "Enter the number of disc: ";
	cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');
return 0;
}
