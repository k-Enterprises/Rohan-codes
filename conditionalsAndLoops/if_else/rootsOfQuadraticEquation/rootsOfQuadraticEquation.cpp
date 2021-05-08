#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a, b, c, root1, root2, discriminant;
	cout << "Enter the values of a, b, c of the equation a(x^2) + bx + c = 0: " << endl;
	cin >> a >> b >> c;
	discriminant = (b * b) - 4 * a * c;
	if(discriminant > 0){
		root1 = round((-b + sqrt(discriminant)) / (2 * a));
		root2 = round((-b - sqrt(discriminant)) / (2 * a));
		cout << root1 << " " << root2 << endl;
	}
	else if(discriminant == 0){
		root1 = round((-b + sqrt(discriminant)) / (2 * a));
		cout << root1 << " " << root1 << endl;
	}
	else {
		cout << "no real roots exist for this equation" << endl;
	}
return 0;
}
