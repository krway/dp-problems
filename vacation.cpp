#include<bits/stdc++.h>
using namespace std;

int solution(int a[], int b[], int c[], int n) {

	int dp[n + 1][4], i, j;

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= 3; j++) {
			dp[i][j] = 0;
		}
	}

	for (i = 1; i <= n; i++) {
		dp[i][1] = a[i] + max(dp[i - 1][2], dp[i - 1][3]);
		dp[i][2] = b[i] + max(dp[i - 1][3], dp[i - 1][1]);
		dp[i][3] = c[i] + max(dp[i - 1][1], dp[i - 1][2]);
	}

	return max(dp[n][1], max(dp[n][2], dp[n][3]));

}

int main() {
	int n, i;
	cin >> n;
	int a[n + 1], b[n + 1], c[n + 1];
	for (i = 1; i <= n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}
	cout << solution(a, b, c, n);
}