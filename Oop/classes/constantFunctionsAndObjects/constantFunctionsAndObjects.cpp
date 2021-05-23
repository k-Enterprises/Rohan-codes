#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1(1, 24);
	Student const s2(2, 25);
	cout << "S1: ";
	s1.display();
	cout << "S2: ";
	s2.display();
return 0;
}
