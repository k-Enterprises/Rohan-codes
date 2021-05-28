#include <iostream>
using namespace std;
#include "Queue.cpp"

int main() {
	Queue<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	cout << "Front: " << q.front() << endl;
	cout << "Size:" << q.getSize() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.getSize() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
 	q.enqueue(70);
	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.getSize() << endl;
	cout << "Queue is empty: " << ((q.isEmpty()) ? "true" : "false") << endl;
return 0;
}
