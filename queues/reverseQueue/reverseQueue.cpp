#include <iostream>
using namespace std;
#include "Queue.cpp"

void takeInput(Queue<int> &q) {
	int data;
	cout << "Enter the data: ";
	cin >> data;
	while(data != -1) {
		q.enqueue(data);
		cin >> data;
	}
return;
}

void print(Queue<int> q) {
	while(q.getSize() != 0) {
		cout << q.front() << " ";
		q.dequeue();
	}
	cout << endl;
}

void reverse(Queue<int> &q) {
	if(q.getSize() <= 1) {
		return;
	}
	int temp = q.front();
	q.dequeue();	
	reverse(q);
	q.enqueue(temp);
return;
}

int main() {
	Queue<int> q;
	takeInput(q);
	reverse(q);
	cout << "The reversed queue: ";
	print(q);
return 0;
}
