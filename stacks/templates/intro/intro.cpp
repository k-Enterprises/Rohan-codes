#include <iostream>
using namespace std;
#include "Pair.cpp"

int main() {
	Pair<int> p1; // specifying template typename int
	p1.setX(10);
	p1.setY(20);
	cout << p1.getX() << " " << p1.getY() << endl;
	Pair<double> p2; // specifying template typename double
	p2.setX(100.34);
	p2.setY(34.21);
	cout << p2.getX() << " " << p2.getY() << endl;
return 0;
}
