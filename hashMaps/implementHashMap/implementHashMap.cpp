#include <iostream>
#include <string>
#include "OurMap.h"
using namespace std;

int main() {
	OurMap<int> map;
	for(int i = 0; i < 10; i ++) {
		char c = '0' + i;
		string key = "abc";
		key = key + c;
		int value = i;
		map.insert(key, value);
		cout << map.getLoadFactor() << endl;
	}
	cout << map.size() << endl;
return 0;
}
