#include <iostream>
#include <queue>
using namespace std;

void takeInput(int * arr, int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int buyTicket(int * arr, int n, int k) {
	queue<int> personQueue;
	priority_queue<int> pq;
	for(int i = 0; i < n; i ++) {
		personQueue.push(arr[i]);
		pq.push(arr[i]);
	}
	int counter = 0;
	while(!pq.empty()) {
		if(personQueue.front() == pq.top()) {
			if(k == 0) {
				return counter + 1;
			}
			counter ++;
			pq.pop();
			personQueue.pop();
			k --;
		} else {
			personQueue.push(personQueue.front());
			personQueue.pop();
			if(k == 0) {
				k = personQueue.size() - 1;
			} else {
				k --;
			}
		}
	}
return counter;
}

int main() {
	int size, k;
	cout << "Enter the size of the array: ";
	cin >> size;
	int * arr = new int[size];
	takeInput(arr, size);
	cout << "Enter the value of k: ";
	cin >> k;
	int ans = buyTicket(arr, size, k);
	cout << "Time to buy the ticket will be: " << ans << " minutes" << endl;
	delete [] arr;
return 0;
}
