#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> ourmap;
	ourmap["abc1"] = 10;
	ourmap["abc2"] = 20;
	ourmap["abc3"] = 30;
	ourmap["abc4"] = 40;
	ourmap["abc5"] = 50;
	ourmap["abc6"] = 60;
	unordered_map<string, int> :: iterator it = ourmap.begin(); // general syntax and begin will give me iterator pointer to first element in map
	while(it != ourmap.end()) { // end will return me pointer which is pointing after the last element in map;
		cout << "Key: " << it -> first << ", " << "Value: " << it -> second << endl;
		it ++;
	}
	unordered_map<string, int> :: iterator it1 = ourmap.find("abc3"); // find will return me iterator to a particular element corresponding to key provided
	cout << it1 -> second << endl;
	// extended erase
	ourmap.erase(it1); // deletes the element as it was pointing to element in the map
	unordered_map<string, int> :: iterator it2 = ourmap.begin();
	ourmap.erase(it2, ourmap.begin()); // erases all element from first to last always last -1 iterators
return 0;
}
