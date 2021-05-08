#include <iostream>
using namespace std;

bool isPrime(int n){
	bool devided = false;
	int i = 2;
	while(i <= n / 2){
		if (n % i == 0){
			devided = true;
			break;
		}
		i ++;
	}
	if(devided == true){
		return false;
	}else{
		return true;
	}
}

int main(){
	int n;
	cout << "Enter the number till you want to print the prime numbers: ";
	cin >> n;
	for(int i = 2; i <= n; i ++) {
		if(isPrime(i)){
			cout << i << endl;
		}
	}
return 0;
}
