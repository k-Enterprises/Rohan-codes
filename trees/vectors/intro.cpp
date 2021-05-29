#include <iostream>
using namespace std;
#include <vector> // same as our dynamic array class 

int main() {
	vector<int> v; // it's a template so gotta specify the typename
	
	//insertig
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//accesing
	cout << v[0] << endl;
	cout << v[1] << endl;
	cout << v[2] << endl;

	//updating 
	v[1] = 100;
	v[2] = 200;

	// only use [ ] for accesing and updation


	// deleteion 
	v.pop_back(); // deletes the last element of the underlying array

	//get size
	cout << v.size() << endl;

	//sage alternate of [] does not return garbage value if index out of range insted throws an error
	cout << v.at(1) << endl;
	cout << v.at(0) << endl;

	// can be used with loops
	for(int i = 0; i < v.size(); i ++) {
		cout << v.at(i) << " ";
	}
	cout << endl;

	// can also return the capacity of actual underlying array in vector class
	cout << "Capacity: " << v.capacity() << endl;
	cout << "Size: " << v.size() << endl;
return 0;
}
