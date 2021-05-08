#include <iostream>
using namespace std;
int main(){
	int i = 10;
	if(i == 10){
		int j = 2; // only accessible under the '{}' of if
		cout << j << endl;
	}
	cout << j << endl; //it is goint to give me an error as j was declared in the bode of if 
return 0;
}
