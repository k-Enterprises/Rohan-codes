#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	    while(i <= n / 2 + 1){
        for(int j = 0;j < i - 1; j ++)
            cout << " ";
        for(int j = 0;j < i;j ++)
            cout << '*' << " ";
        cout << endl;
        i ++;
    }
    i=(n / 2 ) + 1;
    while(i > 0){
        for(int j = 0; j < i - 2; j ++){
            cout << " ";
        }
       for(int j = 0; j < i - 1; j ++)
            cout << '*' << " ";
        cout << endl;
        i --; 
    }
return 0;
}
