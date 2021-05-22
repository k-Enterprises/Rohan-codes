#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1;
	s1.setAge(20);
	s1.rollNumber = 1;
	s1.display();
	Student * s2 = new Student;
	s2 -> display();
	cout << "Student parameterised constructors demo: " << endl;
	Student s3(10);
	cout << "Adderess of student s3: " << &s3 << endl;
	s3.display();
	Student * s4 = new Student(11);
	cout << "Address of student s4: " << s4 << endl;
	s4 -> display();
	Student * s5 = new Student(12, 21);
	s5 -> display();
	cout << "Copy cunstroctor demo: " << endl;
	Student * s6 = new Student((* s5));
	s6 -> display();
	Student * s7 = new Student(s1); // interchange is possible
	s7 -> display();
	cout << "Copy assignment operator demo '=': " << endl;
	Student s8(13, 28);
	s8 = (* s7);
	s8.display();
	delete s2;
	delete s4;
	delete s5;
	delete s6;
	delete s7;
return 0;
}
