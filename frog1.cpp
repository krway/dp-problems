#include<bits/stdc++.h>
using namespace std;
#define D(a) cerr << ">> " << #a << " = >" << a << "<" << endl

#define ff              first
#define ss              second
#define pb              push_back
#define mpp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define test(x)            int x; cin>>x; while(x--)
#define fr(i,x, y)        for (long long i = x; i < y; i++)
#define nl              "\n"
#define ll long long
#define take(n)           ll n;cin>>n;
#define vectorin(n)        vector<ll> v;for(ll i=0;i<n;i++){ll x;cin>>x;v.push_back(x);}
const int MAX = 10000000;
const int d = 2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13; //lcm(1~16)


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("/home/rajeh/Documents/cp/iofiles/input.txt", "r", stdin);
	freopen("/home/rajeh/Documents/cp/iofiles/output.txt", "w", stdout);
	freopen("/home/rajeh/Documents/cp/iofiles/error.txt", "w", stderr);
#endif
}
ll solutin(ll n, ll a[]) {
	ll dp[n + 1];
	dp[0] = INT_MAX;
	dp[1] = 0;
	fr(i, 2, n + 1) {
		ll ans1 = dp[i - 2] + abs(a[i] - a[i - 2]);
		ll ans2 = dp[i - 1] + abs(a[i] - a[i - 1]);
		dp[i] = min(ans1, ans2);
	}

	return dp[n];

}

int main() {
	c_p_c();
	ll n;
	cin >> n;
	ll a[n + 1];
	fr(i, 1, n + 1) {
		cin >> a[i];
	}

	cout << solutin(n, a);
}