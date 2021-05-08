#include <iostream>
#include <cmath>
using namespace std;

void takeInput(int arr[], int n) {
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
return;
}

int maximizeSum(int arr1[], int m, int arr2[], int n) {
	int i = 0;
	int j = 0;
	long maxsum = 0;
	int sum1 = 0,sum2 = 0;
    while(i < m && j < n){
        if (arr1[i] < arr2[j]){
            sum1 = sum1 + arr1[i];
            i ++;
        }
        else if (arr2[j] < arr1[i]){
            sum2 = sum2 + arr2[j];
            j ++;
        }
        else{
            sum1 += arr1[i];
            sum2 += arr2[j];
            maxsum += max(sum1, sum2);
            sum1 = 0, sum2=0;
            i ++;
            j ++;
        }
    }
    if (i == m){
        while (j < n){
            sum2 = sum2 + arr2[j];
            j ++;
        }
    }
    else {
        while(i < m){
            sum1 = sum1 + arr1[i];
            i ++;
        }
    }
    maxsum += max(sum1, sum2);
return maxsum;
}

int main() {
	int n, arr1[100], m, arr2[100];
	cout << "Enter the size of first array: ";
	cin >> n;
	cout << "Enter the elements of first array: " << endl;
	takeInput(arr1, n);
	cout << "Enter the size of second array: ";
	cin >> m;
	cout << "Enter the elements of second array: " << endl;
	takeInput(arr2, m);
	int ans = maximizeSum(arr1, n, arr2, m);
	cout << ans << endl;
return 0;
}
