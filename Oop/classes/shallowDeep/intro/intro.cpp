#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	char name[] = "Rohan", name2[] = "Anushka";
	Student s1(20, name);
	s1.display();
	name[3] = 'n';
	Student s2(21, name);
	s2.display();
	s1.display();
return 0;
}
