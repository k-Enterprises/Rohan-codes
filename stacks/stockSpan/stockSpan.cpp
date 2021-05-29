#include <iostream>
using namespace std;
#include <stack>

void takeInput(int * data, int size) {
	for(int i = 0; i < size; i ++) {
		cout << "Enter the price of stock at day " << i << ": ";
		cin >> data[i];
	}
}

int * stockSpan(int data[], int size) {
	int * output = new int[size];
	stack<int> s;
	output[0] = 1;
	s.push(0);
	for(int i = 1; i < size; i ++) {
		while(!s.empty() && data[s.top()] < data[i]) {
			s.pop();
		}
		if(s.empty()) {
			output[i] = i + 1;
		} else {
			output[i] = i - s.top();
		}
		s.push(i);
	}
return output;
}

void print(int * arr, int size) {
	for(int i = 0; i < size; i ++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int size;
	cout << "Enter the number of days: ";
	cin >> size;
	int * data = new int[size];
	takeInput(data, size);
	int * output = stockSpan(data, size);
	cout << "The stock span is: ";
	print(output, size);
	delete [] data;
	delete [] output;
return 0;
}
