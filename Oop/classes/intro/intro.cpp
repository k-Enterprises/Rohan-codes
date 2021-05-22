#include <iostream>
using namespace std;
#include "student.cpp"


int main() {
	// create objects statically
	Student s1;
	Student s2, s3, s4, s5;
	// create objects dynamically;
	Student * s6 = new Student;
	// seting value of property of objects statically
	s1.age = 24;
	s1.rollNumber = 101;
	cout << "Roll number of student is: " << s1.rollNumber << endl;
	cout << "Age of the student is: " << s1.age << endl;
	// setting and accesing value of objects created dynamically
	
	/*(*s6).age = 26;
	(*s6).rollNumber = 106;*/

	// shortcut method of writing above 2 is

	s6 -> age = 23;
	s6 -> rollNumber = 106;

	cout << "Roll number of student s6: " << s6 -> rollNumber << endl;
	cout << "The age of student s6: " << s6 -> age << endl;
return 0;
}
