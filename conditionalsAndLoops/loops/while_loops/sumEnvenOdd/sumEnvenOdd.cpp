#include <iostream>
using namespace std;
int main(){
	int number, sumEven = 0, sumOdd = 0, remainder;
	cout << "Enter the number: ";
	cin >> number;
	while(number > 0){
		remainder = number % 10;
		if (remainder % 2 == 0){
			sumEven += remainder;
		}
		else{
			sumOdd += remainder;
		}
		number = number / 10;
	}
	cout << "Even digit sum: " << sumEven << " Odd digit sum: " << sumOdd << endl;
return 0;
}
