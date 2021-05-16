#include <iostream>
using namespace std;

int main() {
	const int i = 10; // you have to initialize here itself otherwise it will give an error
	// (i = 10;)  will give an error that can't change the constant variable once initialized
	
	//constant reference from a non constant variable
	
	int j = 12;
	const int &k = j; // the storage value is not constant always the path to it is constant
	// (k ++;) will give an error as k is a constant path to the storage and it has only read access
	cout << j << endl;
	j ++; // will work perfectly fine
	cout << k << endl; // as the k path was constant so it only has read access not write access

	//constant reference from a constant variable

	int const j2 = 12; // we only have read access from here;
	int const &k2 = j2; // we only have read access from here also
	// (j2 ++) will throw an error
	// (k2 ++) will also throw an error

	//reference from const int to int

	int const i2 = 10; // if main variable is has a read right only
	// (int &j3 = i2;) will give error as the referenced variable has read only access 


return 0;
}
