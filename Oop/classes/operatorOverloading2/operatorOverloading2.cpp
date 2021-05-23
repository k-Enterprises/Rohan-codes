#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
	Fraction f1(10, 2);
	f1.display();
	++f1; // function returns value to f1 only
	f1.display();
	Fraction f2 = ++f1; // function increaments f1 and copy it to f2
	f2.display();
	f1.display();
	Fraction f3 = f1++;
	f1.display();
	f3.display();
	f3 += f1;
	f3.display();
	(f3 += f2) += f2;
	f3.display();
return 0;
}
