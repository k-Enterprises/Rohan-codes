#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	if (n == 0){
		cout << "ZERO" << endl;
	}
	else if (n > 0){
		cout << "Positive" << endl;
	}
	else{
		cout << "Negative" << endl;
	}
return 0;
}
