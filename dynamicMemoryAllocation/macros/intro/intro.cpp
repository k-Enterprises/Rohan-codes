#include <iostream>
using namespace std;
#define PI 3.146

int main() {
	float r, area;
	cout << "Enter the value of radius: ";
	cin >> r;
	area = PI * r * r;
	cout << "The area is: " << area << endl;
}
