#include <iostream>
using namespace std;
#include "Pair.cpp"

int main() {
	Pair<int, double> p1; // specifying two different typenames
	p1.setX(10);
	p1.setY(10.44);
	cout << p1.getX() << " " << p1.getY() << endl;
	Pair<Pair<int, int>, int> p2; // nesting the class template in typename
	p2.setY(20);
	Pair<int, int> p4;
	p4.setX(40);
	p4.setY(50);
	p2.setX(p4); // setting the value after creating template class type object
	cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;
return 0;
}
