#include <iostream>
using namespace std;
int main(){
	float start, end, step, cel;
	cout << "Enter the starting value in fahrenheit: ";
	cin >> start;
	cout << "Enter the end value of table in fahrenheit: ";
	cin >> end;
	cout << "Enter the step interval: ";
	cin >> step;
	while(start <= end){
		cel = (start - 32) * (5.0 / 9);
		cout << start << '\t' << cel << endl;
		start += step;
	}
return 0;
}
