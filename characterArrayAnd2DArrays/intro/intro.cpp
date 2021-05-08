#include <iostream>
using namespace std;

int main() {
	char name[100];
	cout << "Please enter your name: ";
	cin >> name;
	name[1] = '\0';
	cout << "Your name is: " << name << endl;
return 0;
}
