#include <iostream>
using namespace std;

int main() {
	int const i = 10;
	// (int * p = &i;) you can not store address of a const variable in a normal pointer
	int const *p = &i;
	cout << *p << endl;

	int j = 20;
	int const *p2 = &j; // it is valid as j has both read and write access so p2 can have read only access
	cout << *p2 << endl;

	p2 = &i; // this is valid as *p2 promised to not change the value it is pointing towards but it can
	// change it self

	// (int * const p3 = &i;) now the above statement is invalid because now pointer is constant too
	// but it will give error as this constant pointer is for a normal ineger

	// to overcome above issue we can do this

	int const * const p3 = &i;
	cout << *p3 << endl;
return 0;
}
