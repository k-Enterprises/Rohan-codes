#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	char name[] = "abcde";
	Student s1(20, name);
	s1.display();
	name[0] = 'x';
	Student s2(21, name);
	s2.display();
	Student s3(s1);
	s3.display();
	s1.name[0] = 'z';
	s3.display();
	s1.display();
return 0;
}
