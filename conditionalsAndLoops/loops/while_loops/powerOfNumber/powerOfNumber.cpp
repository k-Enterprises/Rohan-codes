#include <iostream>
using namespace std;
int main(){
	int number, power, finalNumber;
	cout << "Enter the number and it's power: " << endl;
	cin >> number >> power;
	finalNumber = 1;
	int i = 0;
	while(i < power){
		finalNumber = finalNumber * number;
		i += 1;
	}
	cout << "The answer is : " << finalNumber << endl;
return 0;
}
