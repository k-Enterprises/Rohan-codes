#include <iostream>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cout << "Enter the value of element " << i << ": ";
		cin >> arr[i];
	}
return;
}

int returnSubsetsToK(int arr[], int n, int output[][100], int k) {
	if(n == 0){
		if(k == 0) {
			output[0][0] = 0;
			return 1;
		}else{
			return 0;
		}
	}
	int output1[100][100], output2[100][100];
	int ans1 = returnSubsetsToK(arr + 1, n - 1, output1, k - arr[0]);
	int ans2 = returnSubsetsToK(arr + 1, n - 1, output2, k);
	for(int i = 0; i < ans2; i ++) {
		int cols = output2[i][0];
		output[i][0] = cols;
		for(int j = 1; j <= cols; j ++) {
			output[i][j] = output2[i][j];
		}
	}
	for(int i = ans2; i < ans1 + ans2; i ++) {
		int cols = output1[i - ans2][0];
		output[i][0] = cols + 1;
		output[i][1] = arr[0];
		for(int j = 1; j <= cols; j ++){
			output[i][j + 1] = output1[i - ans2][j];
		}
	}
return ans2 + ans1;
}

void printArray(int output[][100], int n){
	for(int i = 0; i < n; i ++) {
		for(int j = 1; j <= output[i][0]; j ++) {
			cout << output[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int arr[100], n, output[100][100], k;
	cout << "Enter the size of array: ";
	cin >> n;
	takeInput(arr, n);
	cout << "Enter the value of K: ";
	cin >> k;
	int rows = returnSubsetsToK(arr, n, output, k);
	printArray(output, rows);
return 0;
}
