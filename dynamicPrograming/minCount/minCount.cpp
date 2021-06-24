#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int minCount(int n) {
    if(n <= 3){
        return n;
    }
    int count = n;
    for(int i = 1; i <= sqrt(n); i++){
        int temp = i * i;
        if(temp > n){
            break;
        }else{
            // 5, 1 + minCount(4)
            count = min(count, 1 + minCount(n - temp));
        }
    }
    return count;
}

int main() {
	int n;
	cout << "Emter the value of n: ";
	cin >> n;
	int ans = minCount(n);
	cout << "Min count value is: " << ans << endl;
return 0;
}
