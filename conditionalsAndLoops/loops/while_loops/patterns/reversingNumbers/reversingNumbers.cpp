#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1, k;
	while(i <= n){
		int j = 1;
		k = ((i - 1) * i) / 2;
		if(i % 2 == 1){ 
			k += 1;
		}
     	else{ 
			k += i;
		}
		while(j <= i){
			if(i % 2 == 0){
				cout << k --; 
			}else{
				cout << k ++;
			}
			j += 1;
		}
		cout << endl;
		i += 1;
	}
return 0;
}
