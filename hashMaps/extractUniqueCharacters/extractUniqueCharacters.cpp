#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char * removeDuplicates(string str) {
	char * output = new char[str.size()];
	int counter = 0;
	unordered_map<char, int> map;
	for(int i = 0; i < str.size(); i ++) {
		if(map.count(str[i]) == 0) {
			output[counter] = str[i];
			counter ++;
			map[str[i]] ++;
		} else {
			map[str[i]] ++;
		}
	}
return output;
}

int main() {
	string str;
	cout << "Enter the string: ";
	cin >> str;
	string output = removeDuplicates(str);
	cout << "The  final string is: " <<output << endl;
return 0;
}
