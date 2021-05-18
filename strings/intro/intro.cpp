#include <iostream>
using namespace std;

int main() {
	string s = "abc";
	cout << s << endl;
	cout << "Enter another string: ";
	string s2;
	getline(cin, s2); // can accept line inputs
	cout << s2 << endl;


	cout << s[0] << endl; // acts like array
	string s3 = s + s2; // has inbuilt functions
	cout << s3 << endl;


	cout << s3.size() << endl; // have size function

	cout << s2.substr(3) << endl; // have substring function which will give me substring by index provided in it

	cout << s2.substr(2, 3) << endl; // second argument is length of substr


	cout << s2.find("han") << endl; // finds string and returns its index
return 0;
}
