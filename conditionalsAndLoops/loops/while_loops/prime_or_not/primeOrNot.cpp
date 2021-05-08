#include <iostream>
using namespace std;
int main (){
	int n, i;
	cout << "Enter The Number: ";
	cin >> n;
	i = 2;
	if(n == 0){
		cout << "It is ZERO neither prime nor composite";
	}
	while(i <= n/2){
		if(n % i == 0){
			cout << "The number is composite" << endl;
			return 0;
		}
		i += 1;
	}
	cout << "The number is prime" << endl;
}
