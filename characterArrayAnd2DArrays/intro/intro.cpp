#include <iostream>
using namespace std;

int main() {
	char name[100];
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << endl;
	name[7] = 'o';
	cout << "Your name is: " << name << endl;
return 0;
}