#include <iostream>
using namespace std;
#include "Queue.cpp"

int main() {
	int capacity;
	cout << "Enter the capacity of the queue: ";
	/* cin >> capacity;
	Queue<int> q(capacity);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.getSize() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.getSize() << endl;
	q.enqueue(50);
	q.enqueue(60);
	q.enqueue(70);
	cout << q.test() << endl;
	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.getSize() << endl;
	q.enqueue(80);
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Dequeue: " << q.dequeue() << endl;
	cout << "Front: " << q.front() << endl;
	cout << "Queue is empty: " << ((q.isEmpty()) ? "true" : "false") << endl;
	*/
	cin >> capacity;
	Queue<char> q(capacity);
	q.enqueue('A');
	q.enqueue('B');
	q.enqueue('C');
	q.enqueue('D');
	cout << "Front: " << q.front() << endl;
return 0;
}
