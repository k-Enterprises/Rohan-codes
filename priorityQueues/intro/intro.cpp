#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
	PriorityQueue pq;
	pq.insert(12);
	pq.insert(6);
	pq.insert(5);
	pq.insert(100);
	pq.insert(1);
	pq.insert(9);
	pq.insert(0);
	pq.insert(14);
	cout << "Size: " << pq.getSize() << endl;
	cout << "Min: " << pq.getMin() << endl;
	cout << "The heap is: ";
	pq.printCBT();
	pq.removeMin();
	pq.removeMin();
	cout << "The heap is: ";
	pq.printCBT();
return 0;
}
