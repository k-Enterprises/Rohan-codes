#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1(1, 20);
	cout << "S1: ";
	s1.display();
	Student s2(2, 21);
	cout << "S2: ";
	s2.display();
	Student s3(3, 22);
	cout << "S3: ";
	s3.display();
	Student s4(4, 23);
	cout << "S4: ";
	s4.display();
	cout << "Total Students: " << Student :: getTotalStudent() << endl; // "::" is required to access them
return 0;
}
