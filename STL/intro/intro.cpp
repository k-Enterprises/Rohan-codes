#include <iostream>
#include <vector> // for vector class
#include <string> // for string class
#include <utility> // for the pair class
#include <set> // for set class
#include <map> // for map class can also use unordered_map all the functions will be same
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
	

	cout << endl;


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
	

	cout << endl;


	pair<int, char> p(1, 'a'); // declaring and initializing the pair at the same time
	cout << p.first << " " << p.second << endl;
	pair<int, char> p1;
	p1 = make_pair(2, 'b'); // initializing the pair after declaring it
	cout << p1.first << " " << p1.second << endl;
	
	
	cout << endl;


	set<int> set1;
	int arr[] = {1, 2, 3, 4, 5, 6, 6};
	set<int>::iterator it2;
	for(int i = 0; i < 7; i ++) {
		set1.insert(arr[i]); // inserting in the set using ,inser() function (have elements ocuurene only once)
	}
	for(it2 = set1.begin(); it2 != set1.end(); it2 ++) {
		cout << *it2 << endl; // using iterators to print the set
	}
	if(set1.find(6) == set1.end()) { // finding element in the set which returns the iterator
		cout << "No such element present in the set" << endl;
	} else {
		cout << "Element present in the set" << endl;
	}

	
	cout << endl;


	map<int, int> m1; // declaring map
	int arr2[] = {1, 2, 3, 4, 5, 6, 5};
	for(int i = 0; i < 7; i ++) {
		m1[arr2[i]] ++; // inserting in map
	}
	map<int, int>::iterator it3;
	for(it3 = m1.begin(); it3 != m1.end(); it3 ++) {
		cout << it3 -> first << ": " << it3 -> second << endl; // 0X4uojahdf8138 {1,5}
	}
	if(m1.find(5) == m1.end()) {
		cout << "No such element " << endl;
	} else {
		cout << m1.find(5) -> second << endl; // finding and accesing the element using the iterator
	}
	m1.erase(1); // erasing the key - value from map using .erase() function
	cout << "using erase in map" << endl;
	for(it3 = m1.begin(); it3 != m1.end(); it3 ++) {
		cout << it3 -> first << ": " << it3 -> second << endl;
	}
return 0;
}
