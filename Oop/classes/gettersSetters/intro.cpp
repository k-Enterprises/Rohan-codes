#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1;
	s1.rollNumber = 1;
	s1.display();
	cout << "Age of the student is: " << s1.getAge() << endl;
	s1.setAge(20);
	s1.display();

	// dynamically

	Student * s2 = new Student;
	s2 -> rollNumber = 2;
	s2 -> display();
	cout << "The age of student is: " << s2 -> getAge() << endl;
	s2 -> setAge(21);
	s2 -> display();
	delete s2;
return 0;
}
