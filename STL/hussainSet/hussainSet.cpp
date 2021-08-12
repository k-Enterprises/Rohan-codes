#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	long long arr[n];
	for(int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	queue<long long> q;
	int count_m = 0;
	int end_p = n - 1;
	while(m -- ) {
		int curr_m;
		long long ans;
		cin >> curr_m;
		for(; count_m < curr_m; count_m ++) {
			if(end_p >= 0 && (q.empty() || (arr[end_p] >= q.front()))) {
				ans = arr[end_p];
				end_p --;
			} else {
				ans = q.front();
				q.pop();
			}
			q.push(ans / 2);
		}
		cout << ans << endl;
	}
return 0;
}
