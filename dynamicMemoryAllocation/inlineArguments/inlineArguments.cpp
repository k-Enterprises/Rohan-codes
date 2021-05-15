#include <iostream>
using namespace std;

int findMax(int a, int b) { // the conventional function calling will take a performance hit
	return (a >= b) ? a : b;
}

inline int optimisedFindMax(int a, int b) { // the best optimised way
	return (a >= b) ? a : b;
}

int main() {
	int a, b, max;
	cout << "Enter the first element: ";
	cin >> a;
	cout << "Enter the second element: ";
	cin >> b;
	// first method the traditional if else
	if(a >= b) {
		max = a;
	}else{
		max = b;
	}
	// shortcut method tertiary operator
	max = (a >= b) ? a : b;
	// another method is to create a function
	max = findMax(a, b);

	/* the best way is to make function inline so that compiler will copy the function
	body and paste it in the places where it is called on compile time only on runtime ther will be no extra 
	function */

	max = optimisedFindMax(a, b);
	cout << max << endl;
return 0;
}
