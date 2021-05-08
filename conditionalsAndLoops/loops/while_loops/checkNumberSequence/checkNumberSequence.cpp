#include <iostream>
using namespace std;

int main() {
	int prev, size, next;
	bool dec = true, ans = true;
	cout << "Enter the size: ";
	cin >> size;
	cout << "Enter the numbers: " << endl;
	cin >> prev;
	int i = 1;
	while(i < size){
		cin >> next;
		if(prev == next){
			ans = false;
			cout << "false" << endl;
			break;
		}else if(prev < next){
			
			dec = false;
			prev = next;
		}else{
			if(dec == false){
				ans = false;
				cout << "false" << endl;
				break;
			}else{
				prev = next;
			}
		}
		i ++;
	}
	if(ans == true){
		cout << "true" << endl;
}
return 0;
}
