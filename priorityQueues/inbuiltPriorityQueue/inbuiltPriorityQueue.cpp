#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> pq; // by default max-heap
	pq.push(16);
	pq.push(14);
	pq.push(10);
	pq.push(9);
	pq.push(86);
	pq.push(11);
	pq.push(34);
	pq.push(89);
	cout << "Size: " << pq.size() << endl;
	cout << "Max: " << pq.top() << endl;
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}
