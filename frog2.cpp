#include<bits/stdc++.h>
using namespace std;


int solution(int n, int k, int a[]) {
	int dp[n + 1], i, j;
	dp[1] = 0;
	for (i = 2; i <= n; i++) {
		dp[i] = INT_MAX;
		for (j = 1; j <= k; j++) {
			int ans;
			if (i - j >= 1) {
				ans = dp[i - j] + abs(a[i] - a[i - j]);
			}

			else {
				ans = INT_MAX;
			}
			dp[i] = min(dp[i], ans);
		}
	}
	return dp[n];
}

int main() {
	int n, k, i;
	cin >> n >> k;
	int a[n + 1];
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}

	cout << solution(n, k, a);
}