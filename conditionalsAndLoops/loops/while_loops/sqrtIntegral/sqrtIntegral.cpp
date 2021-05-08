#include <iostream>
using namespace std;

int main() {
	int n , ans;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 1; i <= n; i ++){
		if(i * i < n){
			continue;
		}else if(i * i == n){
			ans = i;
			break;
		}else{
			ans = i - 1;
			break;
		}
	}
	cout << ans << endl;
}
