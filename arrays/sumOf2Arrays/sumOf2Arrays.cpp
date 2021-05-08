#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
return;
}

void sumArray(int arr[], int m, int arr2[], int n, int ans[]) {
	int s, i = m - 1, j = n - 1, k, carry = 0;
	if(n > m) {
		s = n + 1;
	}else{
		s = m + 1;
	}
	k = s - 1;
	for(int i = 0; i < s; i ++) {
		ans[i] = 0;
	}
	while(i >= 0 && j >= 0) {
		int adder;
		int sum = arr[i] + arr2[j] + carry;
		if(sum > 9) {
			carry = sum / 10;
			adder = sum % 10;
			ans[k] = adder;
		}else{
			carry = 0;
			ans[k] = sum;
		}
		i --;
		j --;
		k --;
	}
	if(i == -1) {
		while(j >= 0) {
			int adder;
			int sum = arr2[j] + carry;
			if(sum > 9) {
              carry = sum / 10;
              adder = sum % 10;
              ans[k] = adder;
             }else{
            	carry = 0;
             	ans[k] = sum;
          	 } 
          	 j --;
          	 k --;
		}
		if(j == -1){
			while(k >= 0){
				ans[k] = ans[k] + carry;
				k --;
			}
		}
	}else if(j == -1) {
		while(i >= 0) {
			int adder;
			int sum = arr[i] + carry;
			if(sum > 9) {
				carry = sum / 10;
				adder = sum % 10;
				ans[k] = adder;
			}else{
				carry = 0;
				ans[k] = sum;
			}
			i --;
			k --;
		}
		if(i == -1) {
			while(k >= 0) {
				ans[k] = ans[k] + carry;
			}
		}
	}
}

int main() {
	int m, arr[100], n, arr2[100], k[100], s;
	cout << "Enter the size of first array: ";
	cin >> m;
	cout << "Enter the elements of the first array: " << endl;
	takeInput(arr, m);
	cout << "Enter the size of second array: ";
	cin >> n;
	cout << "Enter the elements of the second array: " << endl;
	takeInput(arr2, n);
	sumArray(arr, m, arr2, n, k);
	if(n > m) {
		s = n + 1;
	}else{
		s = m + 1;
	}
	for(int i = 0; i < s; i ++) {
		cout << k[i] << " ";
	}
	cout << endl;
return 0;
}
