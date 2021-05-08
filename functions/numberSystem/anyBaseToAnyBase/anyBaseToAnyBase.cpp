#include <iostream>
using namespace std;

long decimalToAnyBase(long n, int base){
	long sum = 0, pow = 1;
	while(n != 0){
		long rem;
		rem = n % base;
		n = n / base;
		sum = sum + rem * pow;
		pow = pow * 10;
	}
	return sum;
}

long anyBaseToDecimal(long n, int base){
	long sum = 0, pow = 1;
	while(n != 0){
		long rem;
		rem = n % 10;
		n = n / 10;
		sum = sum + rem * pow;
		pow = pow * base;
	}
	return sum;
}

int main(){
	long sourceNumber, sourceBase, destinationBase;
	cout << "Enter source number: ";
	cin >> sourceNumber;
	cout << "Enter source base: ";
	cin >> sourceBase;
	cout << "Enter destination base: ";
	cin >> destinationBase;
	long decimalNumber = anyBaseToDecimal(sourceNumber, sourceBase);
	long ans = decimalToAnyBase(decimalNumber, destinationBase);
	cout << ans << endl;
return 0;
}
