#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> v; // declaring vector
	vector<int>::iterator it; // declaring iterator for the vector
	for(int i = 0; i < 5; i ++) { // adding elements to the vector
		v.push_back(i + 1);
	}
	for(it = v.begin(); it != v.end(); it ++) { // printing value from the vector using iterators
		cout << *it << endl;
	}

	string s = "Rohan Sharma";
	string s1(s); // copying s to s1
	string s2 = s.substr(1, 5); // copying substring of s from index 1 to 5
	string s3(s, 1, 5); // another way of doiung the same
	cout << "String 1: " << s << " String2: " << s1 << " String3: " << s2 << " String4: " << s3 << endl;
	if(s2.compare(s3) == 0) { // important onother way of comparing 2 strings
		cout << "Both the strings are equal" << endl;
	} else {
		cout << "Both strings are not equal" << endl;
	}
return 0;
}
