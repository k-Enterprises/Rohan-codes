#include <iostream>
using namespace std;

int main() {
	int n, term;
	cout << "Enter the number: ";
	cin >> n;
	for(int i = 1, count = 1; count <= n;){
		term = (3 * i) + 2;
		if(term % 4 == 0){
			i ++;
			continue;
		}
		cout << term << " ";
		i ++;
		count ++;
	}
	cout << endl;
return 0;
}
