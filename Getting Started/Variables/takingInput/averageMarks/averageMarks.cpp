#include <iostream>
using namespace std;
int main(){
	char name;
	int m1, m2, m3, avg;
	cout << "Enter the name of student as in single character: ";
	cin >> name;
	cout << "Enter the marks in the three subjects of the student " << name << " :" << endl;
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3) / 3;
	cout << "Average marks of student " << name << " :" << avg << endl;
	return 0;
}
