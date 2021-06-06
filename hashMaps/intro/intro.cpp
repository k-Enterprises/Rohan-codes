#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> ourMap;
	// insert
	pair<string, int> p("abc", 1);
	ourMap.insert(p);
	ourMap["def"] = 2;

	// find or access
	cout << ourMap["abc"] << endl;
	cout << ourMap.at("abc") << endl;
	
	// cout << ourMap.at("ghi") << endl; throws an error stating key does not exist
	cout << ourMap["ghi"] << endl; // if it exisit it will provide the value corresponding to key; if not it will insert it and will return 0 by default

	// check presence of the key
	if(ourMap.count("ghi") > 0) { // count returns only 0 or 1 as one key can only exist uniquely in maps
		cout << "ghi is present" << endl;
	}

	// size of map
	cout << "Size: " << ourMap.size() << endl;

	// erase
	ourMap.erase("ghi");
	if(ourMap.count("ghi") > 0) {
		cout << "ghi is present" << endl;
	}
	cout << "Size: " << ourMap.size() << endl;
}
