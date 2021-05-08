#include <iostream>
using namespace std;

long decimalToBinary(long n){
	long sum = 0, pow = 1;
	while(n != 0){
    	long rem;
        rem = n % 2;
        n = n / 2;
        sum = sum + rem * pow;
        pow = pow * 10;
 	}
	return sum;
}

int main(){
	long decimalNumber;
	cout << "Enter the number: ";
	cin >> decimalNumber;
	long binaryNumber = decimalToBinary(decimalNumber);
	cout << binaryNumber << endl;
return 0;
}
