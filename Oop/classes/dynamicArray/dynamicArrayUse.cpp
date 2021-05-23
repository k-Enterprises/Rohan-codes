#include <iostream>
using namespace std;
#include "dynamicArray.cpp"

int main() {
	DynamicArray arr;
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.add(40);
	arr.add(50);
	arr.add(60);
	arr.add(70);
	cout << "array 1: ";
	arr.print();
	cout << "array 1: ";
	arr.add(0, 100);
	arr.print();
	DynamicArray arr2 = arr;
	arr.add(1, 200);
	cout << "array 2: ";
	arr2.print();
	cout << "array 1: ";
	arr.print();
return 0;
}
