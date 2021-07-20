#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[103][100006];

ll knapsack(ll n, ll k, ll w[], ll v[]) {

	if (n == 0) {
		return 0;
	}

	if (dp[n][k] != -1) {
		return dp[n][k];
	}

	ll ans1 = knapsack(n - 1, k, w, v);
	ll ans2 = INT_MIN;

	if (k - w[n] >= 0) {
		ans2 = v[n] + knapsack(n - 1, k - w[n], w, v);
	}

	return dp[n][k] = max(ans1, ans2);

}

int main() {

	ll n, k, i, j;
	cin >> n >> k;
	ll w[n + 1], v[n + 1];
	for (i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	for (i = 0; i <= n; i++) {
		for (j = 1; j <= k; j++) {
			dp[i][j] = -1;
		}
	}

	cout << knapsack(n, k, w, v);

}