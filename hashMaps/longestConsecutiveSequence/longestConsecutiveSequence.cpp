#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of the element " << i << ": ";
		cin >> arr[i];
	}
return;
}

vector<int> longestConsecutiveSequence(int * arr, int n) {
	int start, end, startIndex, endIndex, max = INT_MIN;
	unordered_map<int, bool> map;
	unordered_map<int, int> indexMap;
	for(int i = 0; i < n; i ++) {
		pair<int, int> p;
		map[arr[i]] = true;
		p.first = arr[i];
		p.second = i;
		indexMap.insert(p);
	}
	for(int i = 0; i < n; i ++) {
		int cend, cstart, cmax;
		if(map[arr[i]] == false) {
			continue;
		}
		map[arr[i]] = false;
		int j = arr[i];
		while(map.count(j) != 0) {
			cend = j;
			map[j] = false;
			j ++;
		}
		j = arr[i];
		while(map.count(j) != 0) {
			cstart = j;
			map[j] = false;
			j --;
		}
		cmax = cend - cstart;
		if(cmax == max) {
			if(indexMap[cstart] < indexMap[start]) {
				start = cstart;
				end = cend;
				max = cmax;
			}
		} else if(cmax > max) {
			start = cstart;
			end = cend;
			max = cmax;
		}
	}
	vector<int> output;
	if(max == 0) {
		output.push_back(start);
		return output;
	}
	output.push_back(start);
	output.push_back(end);
return output;
}

void printVector(vector<int> &output) {
	for(int i = 0; i < output.size(); i ++) {
		cout << output.at(i) << " ";
	}
	cout << endl;
return;
}

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	vector<int> output= longestConsecutiveSequence(arr, size);
	printVector(output);
return 0;
}
