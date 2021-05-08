#include <iostream>
using namespace std;

int main() {
	int n, arr[100], even = 0, odd = 0;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n; i ++){
		if(i % 2 == 0){
			even = even + arr[i];
		}else{
			odd = odd + arr[i];
		}
	}
	cout << "the difference is: " << even - odd << endl;
return 0;
}
